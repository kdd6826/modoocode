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

//class Array {
//	const int dim;
//	int* size;
//
//	struct Address
//	{
//		int level;
//		void* next;
//	};
//	Address* top;
//
//public:
//	Array(int dim, int* array_size) :dim(dim) {
//		size = new int[dim];
//		for (int i = 0; i < dim; i++) size[i] = array_size[i];
//	}
//	void initialize_address(Address* current) {
//		if (!current) return;
//		if (current->level == dim - 1) {
//			current->next = new int[size[current->level]];
//			return;
//		}
//		current->next = new Address[size[current->level]];
//		for (int i = 0; i != size[current->level]; i++) {
//			(static_cast<Address*>(current->next) + i)->level = current->level + 1;
//			//current->next를 시작주소로 하는 Address 배열의 i번째 원소를 가리키는 포인터.
//			initialize_address(static_cast<Address*>(current->next) + i);
//		}
//	}
//
//	void delete_address(Address* current) {
//		if (!current)return;
//		for (int i = 0; current->level < dim - 1 && i < size[current->level]; i++) {
//			delete_address(static_cast<Address*>(current->next) + 1);
//		}
//
//		if (current->level == dim - 1) {
//			delete[] static_cast<int*>(current->next);
//		}
//		delete[] static_cast<Address*>(current->next);
//	}
//};
//
//class Array {
//	const int dim;
//	int* size;
//
//	struct Address
//	{
//		int level;
//		void* next;
//	};
//	Address* top;
//
//public:
//	Array(int dim, int* array_size) :dim(dim) {
//		size = new int[dim];
//		for (int i = 0; i < dim; i++) size[i] = array_size[i];
//
//		top = new Address;
//		top->level = 0;
//
//		initialize_address(top);
//	}
//	Array(const Array& arr) :dim(arr.dim) {
//		size = new int[dim];
//		for (int i = 0; i < dim; i++)size[i] = arr.size[i];
//
//		top = new Address;
//		top->level = 0;
//
//		initialize_address(top);
//
//		copy_addres(top, arr.top);
//	}
//	void copy_addres(Address* dst, Address* src) {
//		if (dst->level == dim - 1) {
//			for (int i = 0; i < size[dst->level]; ++i)
//				static_cast<int*>(dst->next)[i] = static_cast<int*>(src->next)[i];
//			return;
//		}
//		for (int i = 0; i != size[dst->level]; i++) {
//			Address* new_dst = static_cast<Address*>(dst->next) + i;
//			Address* new_src = static_cast<Address*>(src->next) + i;
//			copy_addres(new_dst, new_src);
//		}
//	}
//	void initialize_address(Address* current) {
//		if (!current) return;
//		if (current->level == dim - 1) {
//			current->next = new int[size[current->level]];
//			return;
//		}
//		current->next = new Address[size[current->level]];
//		for (int i = 0; i != size[current->level]; i++) {
//			(static_cast<Address*>(current->next) + i)->level = current->level + 1;
//			//current->next를 시작주소로 하는 Address 배열의 i번째 원소를 가리키는 포인터.
//			initialize_address(static_cast<Address*>(current->next) + i);
//		}
//	}
//
//	void delete_address(Address* current) {
//		if (!current)return;
//		for (int i = 0; current->level < dim - 1 && i < size[current->level]; i++) {
//			delete_address(static_cast<Address*>(current->next) + 1);
//		}
//
//		if (current->level == dim - 1) {
//			delete[] static_cast<int*>(current->next);
//		}
//		delete[] static_cast<Address*>(current->next);
//	}
//	~Array() {
//		delete_address(top);
//		delete[] size;
//	}
//};

/*
디폴트인자
Int(int index, int _level = 0, void* _data = NULL, Array* _array = NULL)
	: level(_level), data(_data), array(_array) {
	if (_level < 1 || index >= array->size[_level - 1]) {
		data = NULL;
		return;
	}
	if (level == array->dim) {
		data = static_cast<void*>(
			(static_cast<int*>(static_cast<Array::Address*>(data)->next) + index));
	}
	else {
		data = static_cast<void*>(
			static_cast<Array::delete_address*>(static_cast<Array::Address*>(data)->next) +
			index);
			
	}
}
*/


//namespace MyArray {
//	class Array;
//	class Int;
//
//	class Array
//	{
//		friend Int;
//
//		const int dim;
//		int* size;
//
//		struct Address {
//			int level;
//			void* next;
//		};
//		Address* top;
//
//	public:
//		Array(int dim, int* array_size) :dim(dim) {
//			size = new int[dim];
//			for (int i = 0; i < dim; i++) size[i] = array_size[i];
//
//			top = new Address;
//			top->level = 0;
//
//			initialize_address(top);
//		}
//		Array(const Array& arr) : dim(arr.dim) {
//			size = new int[dim];
//			for (int i = 0; i < dim; i++) size[i] = arr.size[i];
//
//			top = new Address;
//			top->level = 0;
//
//			initialize_address(top);
//
//			copy_address(top, arr.top);
//		}
//		void copy_address(Address* dst, Address* src) {
//			if (dst->level == dim - 1) {
//				for (int i = 0; i < size[dst->level]; ++i)
//					static_cast<int*>(dst->next)[i] = static_cast<int*>(src->next)[i];
//				return;
//			}
//			for (int i = 0; i != size[dst->level]; i++) {
//				Address* new_dst = static_cast<Address*>(dst->next) + i;
//				Address* new_src = static_cast<Address*>(src->next) + i;
//				copy_address(new_dst, new_src);
//			}
//		}
//		void initialize_address(Address* current) {
//			if (!current) return;
//			if (current->level == dim - 1) {
//				current->next = new int[size[current->level]];
//				return;
//			}
//			current->next = new Address[size[current->level]];
//			for (int i = 0; i != size[current->level]; i++) {
//				(static_cast<Address*>(current->next) + i)->level = current->level + 1;
//				initialize_address(static_cast<Address*>(current->next) + i);
//			}
//		}
//		void delete_address(Address* current) {
//			if (!current) return;
//			for (int i = 0; current->level < dim - 1 && i < size[current->level]; i++) {
//				delete_address(static_cast<Address*>(current->next) + i);
//			}
//
//			if (current->level == dim - 1) {
//				delete[] static_cast<int*>(current->next);
//			}
//			delete[] static_cast<Address*>(current->next);
//		}
//		Int operator[](const int index);
//		~Array() {
//			delete_address(top);
//			delete[] size;
//		}
//	};
//
//	class Int {
//		void* data;
//
//		int level;
//		Array* array;
//
//	public:
//		Int(int index, int _level = 0, void* _data = NULL, Array* _array = NULL)
//			: level(_level), data(_data), array(_array) {
//			if (_level < 1 || index >= array->size[_level - 1]) {
//				data = NULL;
//				return;
//			}
//			if (level == array->dim) {
//				data = static_cast<void*>((
//					static_cast<int*>(static_cast<Array::Address*>(data)->next) + index));
//			}
//			else {
//				data = static_cast<void*>(static_cast<Array::Address*>(
//					static_cast<Array::Address*>(data)->next) + index);
//			}
//		};
//		Int(const Int& i) : data(i.data), level(i.level), array(i.array) {}
//
//		operator int() {
//			if (data) return *static_cast<int*>(data);
//			return 0;
//		}
//		Int& operator=(const int& a) {
//			if (data) *static_cast<int*>(data) = a;
//			return *this;
//		}
//
//		Int operator[](const int index) {
//			if (!data) return 0;
//			return Int(index, level + 1, data, array);
//		}
//	};
//	Int Array::operator[](const int index) {
//		return Int(index, 1, static_cast<void*>(top), this);
//	}
//};
//int main() {
//	int size[] = { 2,3,4 };
//	MyArray::Array arr(3, size);
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 4; k++) {
//				arr[i][j][k] = (i + 1) * (j + 1) * (k + 1);
//			}
//		}
//	}
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 3; j++) {
//			for (int k = 0; k < 4; k++) {
//				std::cout << i << " " << j << " " << k << " " << arr[i][j][k]
//					<< std::endl;
//			}
//		}
//	}
//	return 1;
//}

namespace MyArray {
	class Array;
	class Int;

	class Array {
		friend Int;

		const int dim;
		int* size;
		struct Address {
			int level;
			void* next;
		};

		Address* top;

	public:
		class Iterator {
			int* location;
			Array* arr;

			friend Int;

		public:
			Iterator(Array* arr, int* loc = NULL) :arr(arr) {
				location = new int[arr->dim];
				for (int i = 0; i != arr->dim; i++)
					location[i] = (loc != NULL ? loc[i] : 0);
			}
			Iterator(const Iterator& itr) :arr(itr.arr) {
				location = new int[arr->dim];
				for (int i = 0; i != arr->dim; i++)location[i] = itr.location[i];
			}
			~Iterator() { delete[] location; }
			Iterator& operator++() {
				if (location[0] >= arr->size[0]) return (*this);

				bool carry = false;
				int i = arr->dim - 1;
				do {
					location[i]++;
					if (location[i] >= arr->size[i] && i >= 1) {
						location[i] -= arr->size[i];
						carry = true;
						i--;
					}
					else
						carry = false;
				} while (i >= 0 && carry);

				return(*this);
			}
			Iterator& operator=(const Iterator& itr) {
				arr = itr.arr;
				location = new int[itr.arr->dim];
				for (int i = 0; i != arr->dim; i++) location[i] = itr.location[i];

				return (*this);
			}
			Iterator operator++(int) {
				Iterator itr(*this);
				++(*this);
				return itr;
			}
			bool operator!=(const Iterator& itr) {
				if (itr.arr->dim != arr->dim) return true;
				
				for (int i = 0; i != arr->dim; i++) {
					if (itr.location[i] != location[i]) return true;
				}
				return false;
			}
			Int operator*();
		};

		friend Iterator;
		Array(int dim, int* array_size) :dim(dim) {
			size = new int[dim];
			for (int i = 0; i < dim; i++) size[i] = array_size[i];
			
			top = new Address;
			top->level = 0;

			initialize_address(top);
		}
		Array(const Array& arr) :dim(arr.dim) {
			size = new int[dim];
			for (int i = 0; i < dim; i++) size[i] = arr.size[i];

			top = new Address;
			top->level = 0;

			initialize_address(top);
			copy_address(top, arr.top);
		}
		void copy_address(Address* dst, Address* src) {
			if (dst->level == dim - 1) {
				for (int i = 0; i < size[dst->level]; ++i)
					static_cast<int*>(dst->next)[i] = static_cast<int*>(src->next)[i];
				return;
		}
			for (int i = 0; i != size[dst->level]; i++) {
				Address* new_dst = static_cast<Address*>(dst->next) + i;
				Address* new_src = static_cast<Address*>(src->next) + i;
				copy_address(new_dst, new_src);
			}
		}
		void initialize_address(Address* current) {
			if (!current)return;
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
		void delete_address(Address* current){
			if (!current)return;
			for (int i = 0; current->level < dim - 1 && i < size[current->level]; i++) {
				delete_address(static_cast<Address*>(current->next) + i);
			}
			if (current->level == dim - 1) {
				delete[] static_cast<int*>(current->next);
			}
			delete[] static_cast<Address*>(current->next);
		}
		Int operator[](const int index);
		~Array() {
			delete_address(top);
			delete[] size;
		}
		Iterator begin() {
			int* arr = new int[dim];
			for (int i = 0; i != dim; i++)arr[i] = 0;

			Iterator temp(this, arr);
			delete[] arr;

			return temp;
		}
		Iterator end() {
			int* arr = new int[dim];
			arr[0] = size[0];
			for (int i = 1; i < dim; i++)arr[i] = 0;

			Iterator temp(this, arr);
			delete[] arr;

			return temp;
		}
	};

	class Int
	{
		void* data;
		int level;
		Array* array;
	public:
		Int(int index, int _level = 0, void* _data = NULL, Array* _array = NULL)
			:level(_level), data(_data), array(_array)
		{
			if (_level < 1 || index >= array->size[_level - 1])
			{
				data = NULL;
				return;
			}
			if (level == array->dim) {
				data = static_cast<void*>((
					static_cast<int*>(static_cast<Array::Address*>(data)->next) + index));
			}
			else {
				data = static_cast<void*>(static_cast<Array::Address*>(static_cast<Array::Address*>(data)->next) + index);
			}
		};
		Int(const Int& i) :data(i.data), level(i.level), array(i.array) {}
		
		operator int() {
			if (data)return *static_cast<int*>(data);
			return 0;
		}
		Int& operator=(const int& a) {
			if (data) *static_cast<int*>(data) = a;
			return *this;
		}

		Int operator[](const int index) {
			if (!data)return 0;
			return Int(index, level + 1, data, array);
		}

	};
	Int Array::operator[](const int index) {
		return Int(index, 1, static_cast<void*>(top), this);
	}
	Int Array::Iterator::operator*() {
		Int start = arr->operator[](location[0]);
		for (int i = 1; i <= arr->dim - 1; i++) {
			start = start.operator[](location[i]);
		}
		return start;
	}
}

int main() {
	int size[] = { 2,3,4 };
	MyArray::Array arr(3, size);

	MyArray::Array::Iterator itr = arr.begin();
	for (int i = 0; itr != arr.end(); itr++, i++)(*itr) = i;
	for (itr = arr.begin(); itr != arr.end(); itr++)
		std::cout << *itr << std::endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				arr[i][j][k] = (i + 1) * (j + 1) * (k + 1) + arr[i][j][k];
			}
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 4; k++) {
				std::cout << i << " " << j << " " << k << " " << arr[i][j][k] << std::endl;
			}
		}
	}
	return 1;
}
