#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP

#include <string>
#include <vector>
#include <memory>


#include "course.hpp"


namespace school{
  
class Student{

  
public:
  Student(std::string name, int yearEntry, std::vector<std::shared_ptr<Course>> Courses):
    name_{std::move(name)},
    yearEntry{yearEntry}, 
    Courses{std::move(Courses)}
  {}
 
  std::string const& name() const
  {
    return name_;
  } 
  
  int years_enrolled(int current_year) const;
  std::vector<double> averages () const;
 
private:
  std::string name_;
  int yearEntry;
  std::vector<std::shared_ptr<Course>> Courses;
};

}

#endif



