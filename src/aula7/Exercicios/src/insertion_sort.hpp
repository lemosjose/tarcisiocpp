#ifndef ALGORITHM_INSERTION_SORT_HPP
#define ALGORITHM_INSERTION_SORT_HPP

#include <vector>

namespace algorithm{
  
  template<typename T>
  void insertion_sort(std::vector<T>& vector)
  {
    for(int i = 1; i < vector.size();++i){
      auto k = std::move(vector[i]); //std::move is compatible compatible with std::unique_ptr
      auto j = i - 1;
      while(j > -1 and k < vector[j]){
	vector[j + 1] = std::move(vector[j]);
	--j;
      }

      vector[j + 1] = std::move(k);
    }
    
  }
  
}

#endif
