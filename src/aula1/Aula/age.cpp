#include <iostream>
#include <string> 


int main(){
	int year = 2024;  
	int age = 20;
	//importing "string" from the standard lib
	std::string name = "Lemos";
	std::cout << "Hello " << name
		<< ", i see you are trying to learn C++ \n"
		<< "are you trying since " << year - age << "? \n"; //showing how to slice it up into different lines
}
