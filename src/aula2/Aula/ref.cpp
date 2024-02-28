#include <algorithm>
#include <iostream>
#include <vector>

namespace vectors{

void zeroAll(std::vector<int>& ints){
	for (auto& i:ints){
		i = 0;
	}
}

}

int main(){
	auto v = std::vector<int>{1,2,3,4};
	//utiliza-se do namespace declarado anteriormente
	vectors::zeroAll(v);

	for (auto i:v){
		std::cout << i << "\n";
	}

}

