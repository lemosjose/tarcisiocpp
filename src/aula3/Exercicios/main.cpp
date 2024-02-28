//codigo retirado diretamente de tarcis.io/cpp

#include <iostream>
#include <string>
#include <vector>

#include "student.hpp"
#include "functions.hpp"

int main()
{
    using namespace std::string_literals;
    using school::Student;

    // TODO: initialize a vector called `students` here
    auto students = std::vector<Student>{
      Student{"José", 2009, {8.6, 8.5, 6.8}},
      Student{"Alice", 2019, {4.0, 5.0, 4.3}}, //alice não oi aprovada e nem jubilada, não deve aparecer no stdout ao rodar o programa
      Student{"Elisa", 2022, {8.5, 4.0, 9.5}},
    };
    
    for (auto s: school::approved(students)) {
        std::cout << s.name()
                  << " is approved by grade with average "
                  << s.average() << ".\n";
    }

    for (auto s: school::dismissed_by_time(students, 2019)) {
        std::cout << s.name()
                  << " was dismissed for being in the course for too long: "
                  << s.years_enrolled(2024) << " years.\n";
    }
}
