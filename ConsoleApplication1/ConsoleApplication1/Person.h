#pragma once
#include <string>
class Person
{
private:
	int m_age = 0;
	std::string name;
	std::string country;
	

public:
	void SetAge(int age);
	void SetName(std::string personName);
	void SetCountry(std::string countryName);
	int GetAge();
	std::string GetName();
	std::string GetCountry();

};

