#include <iostream>
#include <vector>
#include <string>


int main(){
	auto garras = std::vector<std::string>{"tizil", "coxinha", "doquinha"};

	for(auto i:garras){
		std::cout << i << "\n";
	}

	auto pip = std::vector<double>{3.14, 2.71, 6.626};

	for (auto i:pip){
		std::cout << i << "\n";
	}
}
