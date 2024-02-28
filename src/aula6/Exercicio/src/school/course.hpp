#ifndef SCHOOL_COURSE_HPP
#define SCHOOL_COURSE_HPP


namespace school{


class Course{
public:
  virtual ~Course() = default;
  virtual double average() const = 0;
};

}
  
#endif
