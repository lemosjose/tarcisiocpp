#include <iostream>
#include <string>
#include <sstream>
#include <optional>
#include <fstream>


std::optional<int> get_int(std::istream& in)
{
  using namespace std::string_literals;
  
  int result;
  std::string buf = ""s;

  std::getline(in, buf);
    
  std::stringstream sstr = std::stringstream{buf};
  sstr >> result;

    
  if(not sstr.fail()){
    return result;
  }
  return {};
}

int ensure_int(std::istream& in, std::string const& reprompt_text)
{
  std::optional<int> result = get_int(in);
  while(not result){
    std::cout << reprompt_text;
    result = get_int(in);
  }

  return *result;
}

int main_(std::istream& input)
{
  std::cout << "Enter the current year" << "\n";
  
  int year = ensure_int(input, "Please reenter the year ");

  std::cout << "Enter your current age" << "\n";

  int age = ensure_int(input, "Please reenter the age ");

  std::cout << "Hello, " << //name
    " I see you were born in " << year - age << "\n";

  return 0;
}

int main(int argc, char **argv)
{
  if(argc < 2){
    std::cout << "Give a file as an argument to read from" << "\n";
    return 1;
  }

  std::string filename = std::string{argv[1]};
  bool is_stdin = filename == "-";

  if(is_stdin){
    return main_(std::cin);
  }

  std::fstream file = std::fstream(filename);
  
  return main_(file);
   
  // std::string name; 
  //std::cout << "Finally, enter your name" << "\n";

  //std::cin >> name;
}
