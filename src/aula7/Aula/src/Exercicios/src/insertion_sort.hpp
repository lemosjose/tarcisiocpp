#include <vector>

namespace algorithm{
  template<typename T>
  void insertion_sort(std::vector<T> vector)
  {
    for(int i = 1; i < vector.size() - 1;i++){
      auto k = vector[i];
      auto j = i - 1;
      while(j > -1 and vector[j] > k){
	vector[j + 1] = vector[j];
	j -= 1;
      }

      vector[j + 1] = k;
    }
    
  }
}
