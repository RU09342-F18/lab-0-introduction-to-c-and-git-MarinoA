//Calculator Program by Alex Marino 
//Embedded Systems Section 3
//Created September 8, 2018
//Due Monday, 9/10/2018

#include <stdio.h>
#include "math.h"

int main()
{
	//Change these values to set the two operands 
	//Can be altered or removed if values are coming from another function, user input, etc 
	int num1 = 10;
	int num2 = 3;
	
	//Example of each operation for demonstration purposes 
	//See README.txt for full explanation of each operation 
	char Operator = '+';
	math(num1, num2, Operator);

	Operator = '-';
	math(num1, num2, Operator);

	Operator = '*';
	math(num1, num2, Operator);

	Operator = '/';
	math(num1, num2, Operator);

	Operator = '%';
	math(num1, num2, Operator);

	Operator = '<';
	math(num1, num2, Operator);

	Operator = '>';
	math(num1, num2, Operator);

	Operator = '&';
	math(num1, num2, Operator);

	Operator = '|';
	math(num1, num2, Operator);

	Operator = '^';
	math(num1, num2, Operator);

	Operator = '~';
	math(num1, num2, Operator);
	return 0;

}



int math(int num1, int num2, char Operator) //Function to perform calculations 
{
	
	switch (Operator)
	{
	case '+': //addition
		ans = num1 + num2;
		printf("SUM: %d\n", ans);
		break;

	case  '-': //subtraction 
		ans = num1 - num2;
		printf("DIFFERENCE: %d\n", ans);
		break;

	case '*': //multiplication 
		ans = num1 * num2;
		printf("PRODUCT: %d\n", ans);
		break;

	case '/': //division
		if (num2 == 0){ //prevents divide by zero 
			printf("Please enter non-zero value for num2.");
			ans = 0;
		}
		else {
		ans = num1 / num2;
		printf("QUOTIENT: %d\n", ans);
		}
		break;

	case '%': //modulus 
		if (num2 == 0){ //prevents divide by zero 
			printf("Please enter non-zero value for num2.");
			ans = 0;
		}
		else {
		ans = num1 % num2;
		printf("MODULUS: %d\n", ans);
		}
		break;

	case '<': //shift left num1 by amount num2
		ans = num1 << num2;
		printf("LEFT SHIFT: %d\n", ans);
		break;

	case '>': //shift right num1 by amount num2
		ans = num1 >> num2;
		printf("RIGHT SHIFT: %d\n", ans);
		break;

	case '&': //bitwise AND
		ans = num1 & num2;
		printf("BITWISE AND: %d\n", ans);
		break;

	case'|': //bitwise OR 
		ans = num1 | num2;
		printf("BITWISE OR: %d\n", ans);
		break;

	case '^': //bitwise XOR
		ans = num1 ^ num2;
		printf("BITWISE XOR: %d\n", ans);
		break;

	case '~': //bitwise inverse of num1
		ans = ~num1;
		printf("BITWISE INVERSION: %d\n", ans);
		break;
	default: //default if user does not enter one of the above operations 
		printf("Please enter a correct operator.");
	}
	return ans;
}
