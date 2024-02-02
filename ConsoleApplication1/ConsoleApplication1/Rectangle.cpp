#include "Rectangle.h"

void Rectangle::SetWidth(float a) 
{
	if (a == 0) 
	{
		m_width = 0;
	}
	else
	{
		m_width = a;
	}
}

void Rectangle::SetLength(float b) 
{
	if (b == 0) 
	{
		m_length = 0;
	}
	else
	{
		m_length = b;
	}
}

float Rectangle::GetLength() 
{
	return m_length;
}
float Rectangle::GetWidth()
{
	return m_width;
}
float Rectangle::GetArea() 
{
	return m_length * m_width;
}