#include "vetor.hpp"

namespace math{


Matrix& Matrix::invert()
{
	x_ = -x_;
	y_ = -y_;

	return *this;
}

Matrix& Matrix::multiply(double s)
{
	x_ *= s;
	y_ *= s;

	return *this;
}

Matrix& Matrix::sum(Matrix const& other)
{
	x_ += other.x_;
	y_ += other.y_;

	return *this;
}


Matrix inverted(Matrix v)
{
	v.invert();

	return v;
}

Matrix sum(Matrix v, Matrix const& u)
{
	v.sum(u);


	return v;
}
Matrix multiply(Matrix v, double s)
{
	v.multiply(s);

	return v;
}

}
