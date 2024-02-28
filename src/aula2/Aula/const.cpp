#include <iostream>
#include <string>

namespace constRef{

//utilizando a keyword "const", conseguimos usar o valor na constante mesmo usando a referência, que alteraria seu valor
bool isPalindrome(const std::string& s)
{
	auto i = s.size() - 1;
	for (auto j = 0u; j < s.size()/2; ++j ){
		if(s[j] != s[i]){
			return false; 
		}
		--i; 
	}
	return true;
}

}

int main()
{
	using namespace std::string_literals;

	const auto word = "arara"s;

	std::cout << word \
		  << "is a palindrome? : " << constRef::isPalindrome(word) << "\n";
}
