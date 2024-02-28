#include <iostream>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> const& v)
{
	auto cleanVector = std::vector<int>{};
	for(auto j: v){
		if (cleanVector.empty() or cleanVector.back() != j){
			cleanVector.push_back(j);
		}
	}
	return cleanVector;
}

int main()
{
	for(auto i: remove_duplicates({1, 1, 1, 2, 3, 3, 4, 1, 1})){
		std::cout << i << "\n";
	}
}
