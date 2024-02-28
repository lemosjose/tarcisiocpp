//the code works now

#include <iostream>
#include <vector>

void remove_duplicates(std::vector<int> const& v)
{
	for(auto i = 0; i < v.size(); i++){
		if (v[i] == v[i + 1]){
			v.erase(i);
		}
	}
}

int main()
{
    auto ints = std::vector<int>{1, 1, 1, 2, 3, 3, 4, 1, 1} ;

    remove_duplicates(ints);

    for (auto i: ints) {
        std::cout << i << '\n';
    }
}
