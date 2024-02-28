#include <iostream>
#include "vetor.hpp"


void print(math::Matrix const& v)
{
	std::cout << '{' << v.x() << ", " << v.y() << "'}\n'" ;
	
}

int main()
{
  
	auto v = math::Matrix{2,3};

	print(v);
	v.invert();
	print(v);
}



