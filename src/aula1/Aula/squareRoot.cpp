#include <iostream>
#include <cmath>

double squareRoot(double x)
{
	auto old = 0.0;
	auto guess = 1.0;

	while (guess != old) {
		old = guess;
		guess = (guess + x/guess)/2;
	}
	return guess;
}


int main(){
	std::cout << squareRoot(2) << "\n";
	std::cout << std::sqrt(2) << "\n";
}
