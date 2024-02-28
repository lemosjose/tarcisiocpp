#include <iostream>

//different naming patterns than usual to match the main provided
int fib_up_to(int position)
{	
	// variável que vai guardar o valor da sequência na posição x e duas variáveis para a soma
	int fibo = 0, n1 = 0, n2 = 1;
	int x = 0;
	while(x != (position - 1)){
		fibo = n1 + n2; 
		n1 = n2;
		n2 = fibo;
		x++;
	}
	return fibo;
}

int fib_less_than(int x){
	int goal, y = 1;
	while(x >= goal){
		x = fib_up_to(y);
		y++;
	}
	return x;
}


///main function copied as specified in https://tarcis.io/cpp/lesson_1/exercises.html number 3
int main()
{
	std::cout << fib_up_to(10) << "\n";
	std::cout << fib_less_than(1024) << "\n";
}
