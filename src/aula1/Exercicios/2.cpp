#include <iostream>

int main()
{
	for(int i = 1; i <= 100; i++){
		if(i%3 == 0){
			std::cout << "fizz";
		}
		if(i%5 == 0){
			std::cout << "buzz";
		}else if(i%5 != 0 and i%3 != 0){
			std::cout << i;
		}
		std::cout << "\n";
	}
}
