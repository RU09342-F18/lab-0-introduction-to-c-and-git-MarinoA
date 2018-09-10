Calculator Program by Alex Marino README.txt
Embedded Systems Section 3
Due by 9/10/2018
Created September 8, 2018
Version 1.0 – Lasted updated September 10, 2018 
##############################################
Included files: 
math.h
math.c
README.txt
Also required: stdio.h 
##############################################
"Calculator Program" by Alex Marino is designed to implement several 
mathematical functions using the C programming language. The variables 
use the C integer (int) data type and therefore some operations have 
limited functionality or produce unexpected results as detailed below. 
For these operations, it would be recommended to change the data type to 
float in order to support decimal numbers. In some situations, an unsigned 
integer (uint) may also be preferred. 
############################################################################################
Variables: 
-	num1: the first operand, an integer (int)
-	num2: the second operand, an integer (int) 
-	Operator: the operator which determines which operation the calculator will perform, a character (char) 
-	ans: stores the result of the operation, an integer (int) 
############################################################################################
Supported operations: 
(Note: because all values are integers, num1 and num2 must always be whole numbers. Results are always in decimal/base ten.)  
+: Addition. Adds num1 to num2. Inputs support all whole numbers and produces a whole number as a result. (3+3 = 6)
-: Subtraction. Subtracts num2 from num1. Inputs support all whole numbers and produces a whole number as a result. (12-9 = 3)
*: Multiplication. Multiplies num1 by num2. Inputs support all whole numbers and produces a whole number as a result. (3*4 = 12)
/: Division. Divides num1 by num2. Inputs support all whole numbers and produces a whole number as a result. Answers which result in a fraction will be truncated to the 1’s place. (Example: 20/6 will result in an answer of 3) 
%: Modulus. Performs a modulo operation, finding the remainder when num1 is divided by num2. Inputs support all whole numbers and produces a whole number as a result. (Example: 10%3 = 1) 
<: Left shift. Performs a binary shift of num1 in the amount of num2. Inputs support all whole numbers. The result is the decimal equivalent of the binary result of the shift after being zero-filled. (Example: 10 in binary is 1010 and 2 in binary is 10. When num1 = 10 and num2 = 2, the result will be 40, or 101000, because the 1010 was shifted to the left by two places and two zeros were filled to the right.)
>: Right shift. Performs a binary shift of num1 in the amount of num2. The result is the decimal equivalent of the binary result of the shift after being zero-filled. (Example: 10 in binary is 1010 and 2 in binary is 10. When num1 = 10 and num2 = 2, the result will be 2, or 0010, because the 1010 was shifted to the right by two places, dropping each place which is shifted out and filling the left of the original most significant digit with zeros.)
&: Bitwise AND. Performs a bitwise AND on num1 and num2. Inputs support all whole numbers. The result is the decimal equivalent of the binary value resulting by performing a logical AND on each bit of num1 with the corresponding bit in num2. (Example: num1 = 11 (1011 in binary) and num2 = 9 (1001 in binary). The first digit ANDS to a 1, the next two AND to a 0, and the last ANDs to a 1, making the result 1001, which the program will output as 9.) 
|: Bitwise OR. Performs a bitwise OR on num1 and num2. Inputs support all whole numbers. The result is the decimal equivalent of the binary value resulting by performing a logical OR on each bit of num1 with the corresponding bit in num2. (Example: num1 = 11 (1011 in binary) and num2 = 9 (1001 in binary). The first bit ORs to a 1, the second to a 0, and the third and fourth to a 1, resulting in 1011 or 11 in base ten.) 
^: Bitwise XOR. Performs a bitwise exclusive OR (XOR) on num1 and num2. Inputs support all whole numbers. The result is the decimal equivalent of the binary value resulting by performing a logical XOR on each bit of num1 with the corresponding bit in num2. (Example: num1 = 10 (1010) and num2 = 3 (0011). The first bit would XOR to 1, the second to 0, the third to 0, and the fourth to 1, resulting in 1001 or 9.) 
~: Bitwise Inversion. Performs a bitwise inversion on each bit of num1. Num2 is not used for this operation. Inputs support all whole numbers. The result is the decimal equivalent of the binary value resulting by inverting each bit of the original number in binary. The decimal value of ans will be considered signed and therefore may produce an unexpected result as shown in the example. (Example: num1 = 10 (1010 in binary). Each bit is inverted and ans becomes 0101. However, because the original binary number also has leading zeros which are also inverted to ones, the number becomes 11110101 which the compiler interprets as -11.) 
