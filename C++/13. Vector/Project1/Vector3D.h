#ifndef _VECTOR3D_H_
#define _VECTOR3D_H_

#include <iostream>

template <typename T>
class Vector3D
{
private:
	T x, y, z;

public:
	const T Magnitude() const;
	const Vector3D<T> Normalize() const;

	const T GetX() const;
	const T GetY() const;
	const T GetZ() const;

	void Print() const;

	Vector3D(const T ac_X, const T ac_Y, const T ac_Z);
	Vector3D();
	~Vector3D();


};
template <typename T>
const T Vector3D<T>::Magnitude() const
{
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
template <typename T>
const Vector3D<T> Vector3D<T>::Normalize() const
{
	Vector3D<T> NewVector(x / Magnitude(), y / Magnitude(), z / Magnitude);
	return NewVector;
}

template <typename T>
const T Vector3D<T>::GetX() const
{
	return x;
}
template <typename T>
const T Vector3D<T>::GetY() const
{
	return y;
}
template <typename T>
const T Vector3D<T>::GetZ() const
{
	return z;
}

template <typename T>
void Vector3D<T>::Print() const
{
	std::cout << x << ", " << y << << ", " << z << " ";
}

template <typename T>
Vector3D<T>::Vector3D(const T ac_X, const T ac_Y, const T ac_Z)
{
	x = ac_X;
	y = ac_Y;
	z = ac_Z;
}
template <typename T>
Vector3D<T>::Vector3D()
{
	x = 0;
	y = 0;
	z = 0;
}

template <typename T>
Vector3D<T>::~Vector3D()
{

}

template <typename T>
const Vector3D<T> operator-(const Vector3D<T>& ac_Vector1)
{
	Vector3D<T> NewVector(-ac_Vector1.GetX(), -ac_Vector1.GetY(), -ac_Vector1.GetZ());
	return NewVector;
}
template <typename T>
const Vector3D<T> operator+(const Vector3D<T>& ac_Vector1, const Vector3D<T>& ac_Vector2)
{
	Vector3D<T> NewVector(
		ac_Vector1.GetX() + ac_Vector2.GetX(), 
		ac_Vector1.GetY() + ac_Vector2.GetY(),
		ac_Vector1.GetZ() + ac_Vector2.GetZ());
	return NewVector;
}
template <typename T>
const Vector3D<T> operator-(const Vector3D<T>& ac_Vector1, const Vector3D<T>& ac_Vector2)
{
	return -ac_Vector1 + ac_Vector2;
}

#endif // VECTOR3D_H_
