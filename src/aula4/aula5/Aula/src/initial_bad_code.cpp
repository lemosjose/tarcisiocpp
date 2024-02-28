#include <iostream>
#include <string>

int main()
{
  using namespace std::string_literals;
    
  int year, age;
  std::string name;

  std::cout << "Enter the current year" << "\n";

  std::cin >> year;

  while(std::cin.fail()){
    std::cin.clear();

    auto s = "s"s;
    std::getline(std::cin, s);

    std::cout << "Plase reenter the current year" << "\n";
    std::cin >> year;
  }

  std::cout << "Enter your current age" << "\n";

  std::cin >> age;

  while(std::cin.fail()){
    std::cin.clear();
    
    auto s = "s"s;
    std::getline(std::cin, s);

    std::cout << "Plase reenter the current year" << "\n";
    std::cin >> year;
  }

  std::cout << "Finally, enter your name" << "\n";

  std::cin >> name;
  
  
  std::cout << "Hello, " << name
            << " I see you were born in " << year - age << "\n";
}
