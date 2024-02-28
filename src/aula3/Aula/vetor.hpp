#ifndef MATH_MATRIX_HPP
#define MATH_MATRIX_HPP

//previne uma inclusão dupla

namespace math{
class Matrix{
public:
    Matrix(double x, double y):
      x_{x},
      y_{y} // constructor para 2 argumentos
    {}

  
    Matrix() = default;
    Matrix(Matrix const&) = default;


    double x() const
    {
      return x_;
      //"this" é implícito, o compilador entenderá que X é o atributo na classe
      //return x_ também funciona
    }
    double y() const
    {
      return y_;
    }

    Matrix &invert();
    Matrix &multiply(double);
    Matrix &sum(const Matrix&); // regra do const, só se aplica ao que está a esquerda dele, a não ser que nada estejs ao lado dele :^)
  
private:
    double x_{0}, y_{0};
};

Matrix inverted(Matrix);
Matrix sum(Matrix, const Matrix &);
Matrix multiply(Matrix, double);

}

#endif

