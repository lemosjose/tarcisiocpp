#ifndef SCHOOL_CALCULUS_HPP
#define SCHOOL_CALCULUS_HPP

#include <iostream>
#include <vector>


#include "course.hpp"


namespace school{
  
class Calculus final: public Course{
public:
  Calculus(double g1, double g2, double g3):
    g1{g1},
    g2{g2},
    g3{g3}
  {}

  double average() const override;
  
private:
  double g1, g2, g3;
};
  
}

#endif
