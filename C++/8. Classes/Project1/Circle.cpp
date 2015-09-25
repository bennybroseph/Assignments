#include "Circle.h"

Circle_Class::Circle_Class(float p_radius)
{
	this->radius = p_radius;
}

float Circle_Class::GetArea()
{
	return PI*(this->radius*this->radius);
}
float Circle_Class::GetDiameter()
{
	return this->radius + this->radius;
}
float Circle_Class::GetCircumference()
{
	return 2 * (PI*this->radius);
}

float Circle_Class::GetRadius()
{
	return this->radius;
}
void Circle_Class::SetRadius(float p_radius)
{
	this->radius = p_radius;
}

Circle_Class::~Circle_Class()
{
}
