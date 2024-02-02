#include "Person.h"

void Person::SetAge(int age) 
{
	if (age == 0)
	{
		m_age = 0;
	}
	else 
	{
		m_age = age;
	}
}
