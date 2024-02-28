//codigo retirado diretamente de tarcis.io/cpp

#include <iostream>
#include <string>
#include <vector>
#include <optional>
#include <sstream>
#include <fstream>

#include "school/student.hpp"
#include "school/functions.hpp"

int main_(std::istream& input)
{
  using school::Student;


  auto students = school::read_students(input);

  std::vector<std::string> names;
  std::vector<double> grades;
      
  for (auto s: school::approved(students)) {
    std::cout << s.name()
	      << " is approved by grade with average "
	      << s.average() << ".\n";
  }

  for (auto s: school::dismissed_by_time(students, 2024)) {
    std::cout << s.name()
	      << " was dismissed for being in the course for too long: "
	      << s.years_enrolled(2024) << " years.\n";
  }

  return 0;
}

int main(int argc, char **argv)
{
  if(argc < 2){
    std::cout << "You must provide a file as an argument." << "\n";
    return 1;
  }

  std::string filename = std::string{argv[1]};

  bool is_stdin = filename == "-";

  std::fstream file = std::fstream(filename);
  
  if(is_stdin){
    return main_(std::cin);
  }

  return main_(file);

}
