#include <iostream>
#include <string>
#include <vector>

int count_occurences(char c,std::string const& word)
{
	int counter = 0;
	for(auto i: word){
		if(i == c){
			counter++;
		}
	}

	return counter;
}

int main()
{
    using namespace std::string_literals;

    const auto word = "evidentemente"s;
    const auto letter = 'e';
    std::cout << "number of " << letter << " in " << word << ": "
              << count_occurences(letter, word);
}
