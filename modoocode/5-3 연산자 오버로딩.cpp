#include <iostream>

//static_cast<int>(asd) = (int)(asd);
/*
int** arr;
arr = new int* [x1];
for (int i = 0; i < x1; i + )arr[i] = new int[x2];
가지치기
*/

//struct Address {
//	int level;
//	void* next;
//};

class Array {
	const int dim;
	int* size;

	struct Address
	{
		int level;
		void* next;
	};
	Address* top;

public:
	Array(int dim, int* array_size) :dim(dim) {
		size = new int[dim];
		for (int i = 0; i < dim; i++) size[i] = array_size[i];
	}
	void initialize_address(Address* current) {
		if (!current) return;
		if (current->level == dim - 1) {
			current->next = new int[size[current->level]];
			return;
		}
		current->next = new Address[size[current->level]];
		for (int i = 0; i != size[current->level]; i++) {
			(static_cast<Address*>(current->next) + i)->level = current->level + 1;

			initialize_address(static_cast<Address*>(current->next) + i);
		}
	}
};


