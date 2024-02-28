#ifndef SCHOOL_FUNCTIONS_HPP
#define SCHOOL_FUNCTIONS_HPP

#include <vector>
#include <istream>

#include "student.hpp"
#include "course.hpp"


namespace school{

bool approved(Course const& course);
std::vector<Student> dismissed_by_time(std::vector<Student> const& s  , int current_year);
std::vector<Student> read_students(std::istream&);

}





#endif
