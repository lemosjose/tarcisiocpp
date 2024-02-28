#include "student.hpp"


namespace school{

int Student::years_enrolled(int current_year) const
{
  return current_year - yearEntry;
}
  
std::vector<double> Student::averages() const
{
  auto averages = std::vector<double>{};

  for(auto& course: Courses){
    averages.push_back(course->average());
  }

  return averages;
}

  
}
