#include <iostream>

int main() 
{	/*                                                             SWITCH STATEMENT CALCULATOR
	int first = 0;
	int second = 0;
	char oper;

	std::cout << "Please enter the first number: " << std::endl;
	std::cin >> first;
	std::cout << "Please enter one of the following: + - * /" << std::endl;
	std::cin >> oper;

	switch (oper)
	{
	case '+':
			std::cout << "Please enter the second number: " << std::endl;
			std::cin >> second;
			std::cout << "Your result is: " << (first + second) << std::endl;

		break;

	case '-':
		std::cout << "Please enter the second number: " << std::endl;
		std::cin >> second;
		std::cout << "Your result is: " << (first - second) << std::endl;
		break;

	case '*':
		std::cout << "Please enter the second number: " << std::endl;
		std::cin >> second;
		std::cout << "Your result is: " << (first * second) << std::endl;
		break;

	case '/':
		std::cout << "Please enter the second number: " << std::endl;
		std::cin >> second;
		std::cout << "Your result is: " << (first / second) << std::endl;
		break;

	default:

		break;
	}    */
	
	
	
	
	/*                                                            TERNEARY OPRATOR
	int x = 0;
	int y = 0;
	int result = 0;

	std::cin >> x;

	result = (x == 0) ? y = 0 : y = 10 / x;

	std::cout << "x = " << x << " , y = " << y  << " and result is: " << result << std::endl;   */


	
	
	
	
	/*                                                            SWITCH STATEMENT
	int choice = 0;

	std::cin >> choice;

	switch (choice)
	{
	case 0:
		std::cout << "0" << std::endl;
		break;

	case 1:
		std::cout << "1" << std::endl;
		break;

	case 2:
		std::cout << "2 or 3" << std::endl;
		break;

	case 3:
		std::cout << "2 or 3" << std::endl;
		break;

	case 4:
		std::cout << "4" << std::endl;
		break;

	default:
		std::cout << "invalid" << std::endl;
		break;
	}  */
	
	
	
	
	/*                                                        POSITIVE OR NEGATIVE INPUT
	int a, b, c, d, e = 0;
	int sumOf = 0;


	std::cout << "Please enter 5 numbers, they can be positive or negative values: " << std::endl;
	std::cin >> a >> b >> c >> d >> e;
	sumOf = a + b + c + d + e;

	if (sumOf > 0)
	{
		std::cout << "The sum of these numbers is Positive: " << sumOf << std::endl;
	}
	else if (sumOf == 0)
	{
		std::cout << "The sum of these numbers is Zero: " << sumOf << std::endl;
	}
	else
	{
		std::cout << "The sum of these numbers is Negative: " << sumOf << std::endl;
	}  */
	

	
	
	
	
	
	/*                                                         LARGEST NUMBER
	int x = 0;
	int y = 0;

	std::cout << "Please enter two numbers below and press enter to find the largest number: " << std::endl;
	std::cin >> x >> y;

	if (x > y)
	{
		std::cout << "The largest number is " << x << std::endl;
	}
	else if (x == y)
	{
		std::cout << "Both numbers are the same size " << y << std::endl;
	}
	else
	{
		std::cout << "The largest number is " << y << std::endl;
	}   */





	/*                                                        X = 100 IF Y = 0
	int x = 0;
	int y = 0;

	if (y == 0)
	{
		x = 100;
	} */
	
	
	
	
	/*                                                               CALCULATOR
	float first = 0.0f;
	float second = 0.0f;

	std::cout << "Enter the first number: " << std::endl;
	std::cin >> first;

	if (std::cin.fail()) 
	{
		std::cout << "You didn't enter an integer. We'll just use '5' instead." << std::endl;
		first = 5;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}
	std::cout << "Enter the second number: " << std::endl;
	std::cin >> second;

	if (std::cin.fail()) 
	{
		std::cout << "You didn't enter an integer. We'll just use '8' instead." << std::endl;
		second = 8;
		std::cin.clear();
		std::cin.ignore(std::cin.rdbuf()->in_avail());
	}

	std::cout << "The two numbers entered are: " << first << " and " << second << "." << std::endl;
	std::cout << first << " + " << second << " = " << (first + second) << std::endl;
	std::cout << first << " - " << second << " = " << (first - second) << std::endl;
	std::cout << first << " / " << second << " = " << (first / second) << std::endl;
	std::cout << first << " * " << second << " = " << (first * second) << std::endl;
	//std::cout << first << " % " << second << " = " << (first % second) << std::endl;

	std::cin.ignore(std::cin.rdbuf()->in_avail());
	std::cin.get();  */
	
	
	
	
	/*                                                                  NUMBER SWAP (HARD)
	int x = 13;
	int y = 24;

	std::cin >> x >> y;

	x = x + y;
	y = x - y;
	x = x - y;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;

	
	
	/*                                                                  10 DIFFERENT VARIABLES
	int num = 0;
	float num1 = 0.0f;
	bool isTrue = true;
	char firstChar = 'A';
	short small = 150;
	long large = 150000;
	double veryLarge = 1500000;
	signed int neg = -150;
	signed long int neg1 = -15000;
	unsigned short int notNeg = 15; */

	
	
	
	/*                                                           lowerCamelCase TO lower_snake_case
	int age;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrix_cooldown;
	int red_armor_value;
	float red_armor_ratio;
	int happiness;
	int gandhi_aggression;
	
	
	
	/*                                                                    BIRTHDAY TASK
	int age = 0;
	int ageMonths = 0;
	int months = 0;
	int decades = 0;
	float decadeRemainder = 0.0f;

	std::cout << "Please enter your age in years and months then press enter:" << std::endl;
	std::cin >> age >> ageMonths;
	months = age * 12 + ageMonths;
	decades = age / 10;
	decadeRemainder = age % 10;


	std::cout << "Howdy! You are " << age << " years and " << ageMonths << " months old!" << std::endl;
	std::cout << "That is " << months << " months of being alive!" << std::endl;
	std::cout << "That is also " << decades << " decades and " << decadeRemainder << " years!" << std::endl; */

	
	
	/*                                                                 NUMBER SWAP TASK
	int x = 13;
	int y = 24;

	int z = 0;

	z = x;
	x = y;
	y = z;

	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "y is " << y << std::endl; */
	
	
	/*                                                               AVERAGE OF NUMBERS
	float a, b, c, d, e;
	float avg;
	avg = a = b = c = d = e = 0.0f;

	std::cout << "Please enter 5 numbers seperated with a "Space" then hit enter:" << std::endl;
	std::cin >> a >> b >> c >> d >> e;

	float totalNumber = a + b + c + d + e;
	avg = totalNumber / 5;

	std::cout << "Average of five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;*/
	
	
	
	/**                                                                  RECTANGLE
	float rectWidth = 0.0f;
	float rectHeight = 0.0f;
	float rectArea = 0.0f;

	rectWidth = 7.5f;
	rectHeight = 14.5f;
	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << "  , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl; **/
	
	
	/**                                                                 TEMP TASK
	float degCelsius = 0.0f;
	float degFahrenheit = 0.0f;

	std::cout << "Please enter a temperature in Celsius to convert to Fahrenheit then press enter: " << std::endl;
	std::cin >> degCelsius;

	degFahrenheit = degCelsius * 9 / 5 + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl; **/
	
	
	/**                                                             USER INPUT TASK
	int userInputA = 0;
	int addNumber = 0;
	int totalNumber = 0;

	std::cout << "Please type a number then hit enter:" << std::endl;
	std::cin >> userInputA;
	std::cout << "Please type a second number then hit enter:" << std::endl;
	std::cin >> addNumber;
	totalNumber = userInputA += addNumber;
	std::cout << "The sum of the numbers you entered is " << totalNumber << std::endl;**/
	
	
	
	
	/**                                                                FLOAT VALUES
	float numberA = 7.0f;
	float numberB = 15.0f;
	float numberC = numberA + numberB;

	std::cout << numberC << std::endl;**/
	
	
	/**                                                                  INT VALUES
	int numberA = 7;
	int numberB = 25;
	int numberC = numberA + numberB;

	std::cout << numberC << std::endl;**/
	
	
	
	
	/*                                                                  MULTIPLE INPUT
	int age = 10;

	std::cout << "I am " << age << " years old!" << std::endl;
	age++;
	std::cout << "Next year I will be " << age << " years old!" << std::endl;
	age += 18;
	std::cout << "In 18 years I will be " << age << " years old!" << std::endl;**/





	/*                                                                    TRIANGLE
	int nextLine = 2;
	int totalDots = 1;
	int count = 0;

	while (count < 4) 
	{
		totalDots += nextLine;
		nextLine++;
		count++;
	}

	std::cout << "triangle number is " << totalDots << std::endl;**/





	/*                                                                   NUMBER OF ODDS
	int numberOfOdds = 15;
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