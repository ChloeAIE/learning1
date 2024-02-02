#pragma once
class Rectangle
{
private:
	float m_length = 0.f;
	float m_width = 0.f;

public:
	void SetWidth(float a);
	void SetLength(float b);
	float GetWidth();
	float GetLength();
	float GetArea();
};

