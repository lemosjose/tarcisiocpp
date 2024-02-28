#include <iostream>
#include <memory>
#include <vector>
 
class Serializable {
public:
  virtual ~Serializable() = default;
  virtual void serialize() const = 0;
};

class Circle: public Serializable{
public:
  Circle(double radius):
    radius{radius}
  {}

  ~Circle()
  {
    std::cout << "Circle!";
  }
  
  void serialize() const
  {
    
    std::cout << "Circle {\n"
              << "radius: " << radius << ",\n"
              << "}\n";

  }
private:
  double radius;
  
};

class Rectangle: public Serializable{ 
public:
  Rectangle(double side1, double side2):
    side1{side1},
    side2{side2}
  {}

  ~Rectangle()
  {
    std::cout << "Rectangle! \n";
  }
  void serialize() const
  {
    std::cout << "Square { \n"
              << "side1: " << side1 << "\n"
              << "side2: " << side2 << "\n"
	      << "} \n";

  }

private:
  double side1, side2;
};




class DisplayFile: public Serializable{

public:
  DisplayFile(std::vector<std::unique_ptr<Serializable>> objects):
    objects{std::move(objects)}
  {}

  void serialize() const
  {
    std::cout << "DisplayFile {\n"
              << "objects = [ \n";
    for(auto& object: objects){
      object->serialize();
    }

    std::cout << "     ]\n";
    std::cout << "}\n"; 
  }
  
private:
  std::vector<std::unique_ptr<Serializable>> objects;
};

void print_serializable(Serializable const& s)
{
  s.serialize();
}

int main()
{
  Circle circulo = Circle{6.7};
  Rectangle retangulo = Rectangle{6.5, 5.4};

  Serializable& s1 = circulo;
  Serializable& s2 = retangulo;

  s1.serialize();

  s2.serialize();

  auto objects = std::vector<std::unique_ptr<Serializable>>{};

  // workaround!!!!
  objects.push_back(std::unique_ptr<Circle>{new Circle{circulo}});
  objects.push_back(std::unique_ptr<Rectangle>{new Rectangle{retangulo}});
 
  auto file = DisplayFile{std::move(objects)}; 

  print_serializable(file);
}
