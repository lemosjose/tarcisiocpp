#include <vector>
#include <iostream>
#include <istream>
#include <string>
#include <sstream>
#include "functions.hpp"
#include "student.hpp"



namespace school{

std::vector<Student> dismissed_by_time(std::vector<Student> const& students, int current_year)
{
  auto dismissed = std::vector<Student>{};

  for(auto s: students){
    if(s.years_enrolled(current_year) > 7){
      dismissed.push_back(s);
    }
  }

  return dismissed;
}

std::vector<Student> approved(std::vector<Student> const& students)
{
  auto approved = std::vector<Student>{};

  for(auto s: students){
    if(s.average() > 6.0){
      approved.push_back(s);
    }
  }

  return approved;
}

namespace {

int read_int(std::istream& input)
{
  int i = 0;
  std::string buf; 
  
  std::getline(input,buf);
  std::stringstream sstr = std::stringstream{buf};

  sstr >> i;

  return i;
}

std::string read_string(std::istream& input)
{
  std::string str = std::string{};

  std::getline(input, str);

  return str;
}

double read_double(std::istream& input)
{
  double i = 0;
  std::string buf;

  std::getline(input,buf);
  std::stringstream sstr = std::stringstream{buf};
  
  sstr >> i;

  return i;
}
  
Student read_student(std::istream& input)
{
  if(&input == &std::cin){
      std::cout << "Enter the student's name " << "\n";
  }

  std::string name = read_string(input);

  if(&input == &std::cin){
      std::cout << "Enter the year of entry" << "\n";
  }

  int year = read_int(input);
  
  std::vector<double> grades = std::vector<double>{};

  for(auto j = 0u; j < 3; j++){
    if(&input == &std::cin){
       std::cout << "Enter the grade "
	      << j << "\n";
    }  
    double grade = read_double(input);
    grades.push_back(grade);
  }
  return {
    name,
    year,
    grades
  };
}
  
}

std::vector<Student> read_students(std::istream& input)
{
  if(&input == &std::cin){
    std::cout << "Type how many students you will enter" << "\n";
  }
  int n_students = read_int(input);
  std::vector<Student> students = std::vector<Student>{};
  
  for(int i = 0u; i < n_students; i++){
    students.push_back(read_student(input));
  }

  return students;
}

}
