#include <iostream>
#include <string>

std::string check_palindrome(std::string oldString){
	std::string backup = oldString;
	int length = oldString.length() - 1;
	for(int i = 0; i <= 0; i++){
		std::swap(oldString[i], oldString[length - i]);
	}
	if(oldString == backup){
		return "a palindrome";
	}else{
		return "not a palindrome";
	}
}

int main()
{
	std::cout << "arara is " << check_palindrome("arara") << "\n";
	std::cout << "banana is " << check_palindrome("banana") << "\n";	
}
