// Basics
// /
// Easy
// /
// Armstrong
// Problem Statement:
// Your task is to determine if the given number num is a Armstrong number or not.

// You will return "true" if number is Armstrong, otherwise return "false".



// Brief editorial for Armstrong number's:

// Armstrong is a number (with digits n) such that the sum of its digits raised to nth power is equal to the number itself.

// For example:

// num = 371.

// no of digits in num are: 3.

// So according to the explanation given above regarding the Armstrong numbers we do 33 + 73 + 13 = 371, so num = 371 is Armstrong no.

// Similarly if num = 1634.

// no of digits in 1634 are 4.

// Then calculate accordingly: 14 + 64 + 34 + 44 = 1634, so num = 1634 is also a Armstrong no.



// Your task is to complete function checkArmstrong with following parameters passed:

// integer num: num is a positive integer to check.

// Function returns:

// string : Return "yes" if given number is Armstrong otherwise return "no"




// Constraints to be followed:

// 1 <= num <= 105



// Sample test case 1:

// Input:

// 1634

// Output:

// "yes"



// Sample test case 2:

// Input:

// 372

// Output:

// "no"



// Important Instruction : Sample test case is for explanatory purpose but to run your custom test case on the terminal follow the input layout as mentioned in the command line arguments.



// Function Rules:
// Fill the missing logic in function checkArmstrong with return type char * and parameters as listed below:

// int num
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 1634
// Expected Output:
// yes

// Test Case 2:
// Command Line Arguments: 372
// Expected Output:
// no




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <math.h>
int power(int base, int exponent)
{
	int result=1;
	for (int i=0;i<exponent;i++)
	{
		result*=base;
		
	}
	return result;
	
}

char * checkArmstrong(int num) {
	int originalNum = num;
	int n = 0 ;
	while(num>0)
	{
		num/=10;
		n++;
		
		
	}
	num  = originalNum;
	int armstrongSum=0;
	while (num>0)
	
	{
	
	int digit = num%10;
	armstrongSum += power(digit,n);
	num/=10;
	}
	if(armstrongSum == originalNum )
	{
		return "yes";
		
	}
	else
	{
		return "no";
	}




}

int main(int argc, char *argv[]) {
	int num = atoi(argv[1]);
	printf("%s\n", checkArmstrong(num));
	return 0;
}
