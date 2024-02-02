#include "Circle.h"

const extern float PI;

void Circle::SetRadius(float f)
{
	if (f == 0)
	{
		m_radius = 0.0f;
	}
	else
	{
		m_radius = f;
	}
}
float Circle::GetRadius() 
{
	return m_radius;
}
float Circle::GetArea() 
{
	return PI * (m_radius * m_radius);
}

float Circle::GetCircumference() 
{
	return 2 * PI * m_radius;
}