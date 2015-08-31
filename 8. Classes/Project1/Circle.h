#ifndef CIRCLE_H
#define CIRCLE_H

#define PI 3.1415926535897932384626433832795

class Circle_Class
{
public:
	Circle_Class(float = 5);

	float GetArea();
	float GetDiameter();
	float GetCircumference();

	float GetRadius();
	void SetRadius(float);

	~Circle_Class();

private:
	float radius;

};

#endif //CIRCLE_H