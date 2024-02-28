#ifndef SCHOOL_DATASTRUCTURES_HPP
#define SCHOOL_DATASTRUCTURES_HPP

#include <iostream>
#include <vector>

#include "course.hpp"

namespace school{

class DataStructures final: public Course {
public:
  DataStructures(double t1, double t2, double t3, double prova):
    t1{t1},
    t2{t2},
    t3{t3},
    prova{prova}
  {}
  
  double average() const override;
private:
  double t1,t2,t3,prova;
};
  
}


#endif
