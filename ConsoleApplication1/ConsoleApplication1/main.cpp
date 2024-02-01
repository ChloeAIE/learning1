#include <iostream>





/*                                                           FACTORAL CALC FUNCTION
int factoralCalc(int input)
{
	std::cin >> input;

	int value = 0;
	int totalValue = 0;
	value = input;
	totalValue = input;

	for (int i = input; i > 0; i--) 
	{
		if (value == input) 
		{
			value--;
		}
		else 
		{
			totalValue = totalValue * i;
		}
	}

	std::cout << "Total value is: " << totalValue << std::endl;

	return totalValue;
} */



/*int fibSeq(int n)
{
	int numbersRan = 0;
	int totalValue = 0;
	int currentValue = 0;
	int lastValue1 = 0;
	for (int i = numbersRan; i <= n; i++) 
	{
		if (i == 1) 
		{
			currentValue++;
		}
		totalValue = lastValue1 + currentValue;
		std::cout << totalValue << std::endl;
		if (i != 1) 
		{
			lastValue1 = currentValue;
		}
		currentValue = totalValue;
		
	}
	return currentValue;
} */



/*                                                               AVERAGE OF 5 FUNCTION
int averageOfFive(int a, int b, int c, int d, int e) 
{
	std::cout << "Please enter 5 numbers to get the average of them." << std::endl;
	std::cin >> a >> b >> c >> d >> e;

	int f = (a + b + c + d + e) / 5;

	return f;
} */



/*                                                                AREA OF RECT FUNCTION
float areaOfRectangle(float width, float height) 
{
	return width * height;
}*/



/*                                                                   TRIANGLE FUNCTION
//int numberOfRows(int rows)
{
	std::cout << "Please enter how many rows you would like:" << std::endl;
	std::cin >> rows;

	int totalDots = 0;

	for (int i = rows; i > 0; i--)
	{
		totalDots += i;
	}

	std::cout << "Total number of dots for a triangle with " << rows << " rows will be " << totalDots << "." << std::endl;
	return totalDots;
}  */




/*                                                                   TEMP TASK FUNCTION
float degCalculation(float cel)
{
	std::cout << "Please enter a temperature in Celsius to convert to Fahrenheit then press enter: " << std::endl;
	std::cin >> cel;
	return cel * 9 / 5 + 32;
}  */
int main()                                                     
{
	// factoralCalc(0);                                              FACTORAL CALC


	//fibSeq(16);                                                      FIBONACCI CALL


	/*                                                              AVERAGE OF 5 CALL
	int f = averageOfFive(0, 0, 0, 0, 0);
	std::cout << "The average of these 5 numbers is: " << f << std::endl;
	std::cout << "The average of these 5 numbers / 2 is " << (f / 2) << std::endl;
	std::cout << "The average of these 5 numbers / 2 * by 10 is : " << (f * 10) << std::endl;             + a little extra to make sure its tracking f*/

	              /*                                                   AREA OF RECT CALL

	float area = areaOfRectangle(15.5f, 21.5f);
	std::cout << "The area of this rectangle is " << area << "." << std::endl;*/



	// numberOfRows(0);                                             TRIANGLE CALL

	/*
	1. a static local variable is a variable stored in the main function, a global variable is stored outside of main
	2. 
	*/
	
	
	
	
	
	/*                                                         TRUE OR FALSE #2
	A - true
	B - false    (this is true, i got this wrong)
	C - false
	D - true
	E - false
 
 */




	//                                                TRUE OR FALSE
	/*
	A.true
	B.false
	C.no idea
	D.true
	E.true
	F.false
	G.true
	H.false
	I.true
	J.true
	*/





	/*                                                     MONTHS TO INTS
	int monthInput = 0;

	int daysThirty = 30;
	int daysOne = 31;
	int daysFeb = 28;

	std::cout << "Please enter the number of a month: " << std::endl;
	std::cin >> monthInput;

	switch (monthInput)
	{
	case 1:
		std::cout << "The month is January, it has " << daysOne << " days!" << std::endl;
		break;

	case 2:
		std::cout << "The month is Febuary, it has " << daysFeb << " days!" << std::endl;
		break;

	case 3:
		std::cout << "The month is March, it has " << daysOne << " days!" << std::endl;
		break;

	case 4:
		std::cout << "The month is April, it has " << daysThirty << " days!" << std::endl;
		break;

	case 5:
		std::cout << "The month is May, it has " << daysOne << " days!" << std::endl;
		break;

	case 6:
		std::cout << "The month is June, it has " << daysThirty << " days!" << std::endl;
		break;

	case 7:
		std::cout << "The month is July, it has " << daysOne << " days!" << std::endl;
		break;

	case 8:
		std::cout << "The month is August, it has " << daysOne << " days!" << std::endl;
		break;

	case 9:
		std::cout << "The month is September, it has " << daysThirty << " days!" << std::endl;
		break;

	case 10:
		std::cout << "The month is October, it has " << daysOne << " days!" << std::endl;
		break;

	case 11:
		std::cout << "The month is November, it has " << daysThirty << " days!" << std::endl;
		break;

	case 12:
		std::cout << "The month is December, it has " << daysOne << " days!" << std::endl;
		break;

	default:
		std::cout << "I'm sorry you did not enter a correct number, please try again.." << std::endl;
		break;
	} */
	
	
	
	
	/*                                                             SWITCH STATEMENT CALCULATOR
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
	
	
	  //                                                                 TEMP TASK

	
	/*float f = degCalculation(0);                                    TEMP TASK FUNCTION CALL
	std::cout << "Temp in Farh is: " << f << std::endl;*/

/*
	float degCelsius = 0.0f;
	float degFahrenheit = 0.0f;

	std::cout << "Please enter a temperature in Celsius to convert to Fahrenheit then press enter: " << std::endl;
	std::cin >> degCelsius;

	degFahrenheit = degCelsius * 9 / 5 + 32;

	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius: " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;  */
	
	
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