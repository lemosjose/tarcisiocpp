#ifndef SCHOOL_FUNCTIONS_HPP
#define SCHOOL_FUNCTIONS_HPP

#include <vector>
#include "student.hpp"

namespace school{
  std::vector<Student> approved(std::vector<Student> const& s);
  std::vector<Student> dismissed_by_time(std::vector<Student> const& s  , int current_year);
}





#endif
