#include <iostream>

int main()
{
	// the "auto" keyword automatically decides the variable type from the value initialized within
	auto grade = 7.9;

	if (grade < 5.75){
		std::cout << "Sorry, you didn't pass \n";
	} else if (grade < 8.0){
		std::cout << "Ok.\n";
	} else{
		std::cout << "Congratulations!";
	}

}
