#include <iostream>
#include <sstream>
#include <type_traits>


struct Point{
public:
  Point(double x, double y);
  
private:
  double x,y;
};

template <typename Numeric>
auto read_number(std::istream& input)
{
  static_assert(std::is_arithmetic<Numeric>::value, "read_number expects an arithmetic type");
  auto buf = std::string{}; 
  
  std::getline(input,buf);
  std::stringstream sstr = std::stringstream{buf};

  auto i = Numeric{};
  sstr >> i;

  return i;
}

int main()
{
  std::cout << read_number<int>(std::cin) << "\n";
  std::cout << read_number<double>(std::cin) << "\n";
  std::cout << read_number<std::string>(std::cin) << "\n"; //on purpose to check how the compile will show the error.
}
