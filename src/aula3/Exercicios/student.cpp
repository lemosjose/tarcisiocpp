#include "student.hpp"


namespace school{

int Student::years_enrolled(int current_year) const
{
  return current_year - yearEntry;
}

  
double Student::average() const
{
  double total = 0.0;
  for(double g: grades){
    total += g;
  }

  return total / grades.size();
}

  
}
