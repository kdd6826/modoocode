#include <iostream>

#include "header1.h"
#include "header2.h"

using namespace header1;
int main() {

	

	//std::cout << "Hello Wide World" << std::endl;

	std::cout << "hi" << std::endl
		<< "my name is "
		<< "Psi" << std::endl;
	
	std::cout << foo() << std::endl;
	std::cout << header2::foo() << std::endl;
	return 0;
}