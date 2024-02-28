#ifndef SCHOOL_STUDENT_HPP
#define SCHOOL_STUDENT_HPP

#include <string>
#include <vector>

namespace school{
class Student{

  
public:
  Student(std::string name, int yearEntry, std::vector<double> grades):
    name_{std::move(name)},
    yearEntry{yearEntry}, 
    grades{std::move(grades)}
  {}

  /*COMENTÁRIO REQUISITADO NO ENUNCIADO DO EXERCÍCIO

Não fiz o constructor, pois esta classe não possuí nenhum tratamento a ser feito nos seus atributos e dados intrínsecos a esse objeto, sendo obrigação da inicialização atribuir os dados
    
   */
  std::string const& name() const
  {
    return name_;
  } 
  
  int years_enrolled(int current_year) const;
  double average() const;
 
private:
  std::string name_;
  int yearEntry;
  std::vector<double> grades;
};

}

#endif



