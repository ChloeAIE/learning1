#include <iostream>

int main() 
{
	int userInputA = 0;
	int addNumber = 0;
	int totalNumber = 0;

	std::cout << "Please type a number then hit enter:" << std::endl;
	std::cin >> userInputA;
	std::cout << "Please type a second number then hit enter:" << std::endl;
	std::cin >> addNumber;
	totalNumber = userInputA += addNumber;
	std::cout << "The sum of the numbers you entered is " << totalNumber << std::endl;
	
	
	
	
	/** FLOAT VALUES
	float numberA = 7.0f;
	float numberB = 15.0f;
	float numberC = numberA + numberB;

	std::cout << numberC << std::endl;**/
	
	
	/** INT VALUES
	int numberA = 7;
	int numberB = 25;
	int numberC = numberA + numberB;

	std::cout << numberC << std::endl;**/
	
	
	
	
	/* MULTIPLE INPUT
	int age = 10;

	std::cout << "I am " << age << " years old!" << std::endl;
	age++;
	std::cout << "Next year I will be " << age << " years old!" << std::endl;
	age += 18;
	std::cout << "In 18 years I will be " << age << " years old!" << std::endl;**/






	/**int nextLine = 2;
	int totalDots = 1;
	int count = 0;

	while (count < 4) 
	{
		totalDots += nextLine;
		nextLine++;
		count++;
	}

	std::cout << "triangle number is " << totalDots << std::endl;**/






	/*int numberOfOdds = 15;
	int total = numberOfOdds * numberOfOdds;

	std::cout << "Total of the first " << numberOfOdds << " odd numbers is " << total << std::endl;

	return 0;**/



	/**int total = 0;
	int count = 0;
	int number = 1;

	while (count < 15)
	{
		total += number;
		number += 2;
		count += 1;
	}

	std::cout << "Total of the first 15 odd numbers is " << total << std::endl;

	return 0; **/



	/** std::cout << "Hello World!" << std::endl;
	system("pause");
	return 0; **/
}