#include <iostream>
#include <vector>

int main(){
	//initializing with no values
	auto vector = std::vector<int>{};

	vector = {1,2,3,4};

	//initializing already with values
	auto w = std::vector<int>{1,2,3,4};

	//iterating through vector
	for(auto i:vector){
		std::cout << i << "\n";
	}

	for(auto i:w){
		std::cout << i << "\n";
	}
}

