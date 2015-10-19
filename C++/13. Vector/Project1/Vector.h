#ifndef _VECTOR_H_
#define _VECTOR_H_

#include <iostream>

template <typename T>
class Vector2D
{
private:
	T x, y;

public:
	const T Magnitude() const ;
	const Vector2D<T> Normalize() const ;
	
	const T GetX() const;
	const T GetY() const;

	void Print() const;

	Vector2D(const T ac_X, const T ac_Y);
	Vector2D();
	~Vector2D();

	
};
template <typename T>
const T Vector2D<T>::Magnitude() const 
{
	return sqrt(pow(x, 2) + pow(y, 2));
}
template <typename T>
const Vector2D<T> Vector2D<T>::Normalize() const
{
	Vector2D<T> NewVector(x/Magnitude(), y/Magnitude());
	return NewVector;
}

template <typename T>
const T Vector2D<T>::GetX() const
{
	return x;
}
template <typename T>
const T Vector2D<T>::GetY() const 
{
	return y;
}

template <typename T>
void Vector2D<T>::Print() const
{
	this;
	std::cout << x << ", " << y << " ";
}

template <typename T>
Vector2D<T>::Vector2D(const T ac_X, const T ac_Y)
{
	x = ac_X;
	y = ac_Y;
}
template <typename T>
Vector2D<T>::Vector2D()
{
	x = 0;
	y = 0;
}

template <typename T>
Vector2D<T>::~Vector2D()
{

}

template <typename T>
const Vector2D<T> operator-(const Vector2D<T>& ac_Vector1)
{
	Vector2D<T> NewVector(-ac_Vector1.GetX(), -ac_Vector1.GetY());
	return NewVector;
}
template <typename T>
const Vector2D<T> operator+(const Vector2D<T>& ac_Vector1, const Vector2D<T>& ac_Vector2)
{
	Vector2D<T> NewVector(ac_Vector1.GetX() + ac_Vector2.GetX(), ac_Vector1.GetY() + ac_Vector2.GetY());
	return NewVector;
}
template <typename T>
const Vector2D<T> operator-(const Vector2D<T>& ac_Vector1, const Vector2D<T>& ac_Vector2)
{	
	return -ac_Vector1 + ac_Vector2;
}
#endif // _VECTOR_H_