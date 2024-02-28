#include <iostream>
#include <istream>
#include <string>
#include <memory>
#include <vector>
#include <sstream>

#include "functions.hpp"
#include "student.hpp"
#include "calculus.hpp"
#include "datastructures.hpp"


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
 
bool approved(Course const& course)
{
  return course.average() > 6;
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

std::unique_ptr<school::Calculus> read_calculus(std::istream& input)
{
  double t1 = read_double(input);
  double t2 = read_double(input);
  double t3 = read_double(input);

  return std::make_unique<school::Calculus>(t1,t2,t3);
}

std::unique_ptr<school::DataStructures> read_dataStructures(std::istream& input)
{
  double t1 = read_double(input);
  double t2 = read_double(input);
  double t3 = read_double(input);
  double p2 = read_double(input);
  
  return std::make_unique<school::DataStructures>(t1,t2,t3, p2);
}

  
std::unique_ptr<Course> read_course(std::istream& input)
{
  auto name = read_string(input);

  if(name == "Data Structures"){
    return read_dataStructures(input);
  }else{
    return read_calculus(input);
  }
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

  if(&input == &std::cin){
    std::cout << "Enter the number of courses the student is enrolled \n";
  }
  
  auto n_courses = read_int(input);

  auto courses = std::vector<std::shared_ptr<Course>>{};

  
  for(auto i = 0; i < n_courses;i++){
    if(&input == &std::cin){
      std::cout << "Enter the course number" << i << "\n";
    }
    
    std::unique_ptr<Course> course = read_course(input);
    courses.push_back(std::move(course));
  }

  return{
    name,
    year,
    std::move(courses),
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
