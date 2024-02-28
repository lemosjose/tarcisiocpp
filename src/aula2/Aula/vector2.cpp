#include <iostream>
#include <vector>


int main(){
	auto v = std::vector<int>{1,2,3,4};
	auto w = std::vector<int>{4,3,2,1};

	std::cout << "before changing v[3] = " 
		  << v[3] << "\n";

	v[3] = 42;

	std::cout << "after changing: " 
		  << v[3] << "\n";


	auto n = v.size();

	std::cout << "before: v[n-1] = " 
		  << v[n - 1] << "\n";
	
	v.push_back(777); //adiciona o número do vasco no vetor.
			  
	n = v.size(); // atualiza após a adição 
		      //
	std::cout << "n = v.size() = "
		  << n << "\n";

	std::cout << "v[n - 1] = "
		  << v[n-1] << "\n";

	std::cout << "v.back() = " 
		  << v.back() << "\n";

	v.pop_back();

	std::cout << "after v.pop_back() = "
		  << v.back() << "\n";
}
