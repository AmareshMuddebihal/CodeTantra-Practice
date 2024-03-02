// Problem Statement:
// The function receives one parameter fiveDigitNum and should return the reverse of it.

// Constraints
// fiveDigitNum is a positive integer in the range of 10000 to 99999, both inclusive
// Function Rules:
// Fill the missing logic in function reverseFiveDigitNum with return type int and parameters as listed below:

// int fiveDigitNum
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 12345
// Expected Output:
// 54321

// Test Case 2:
// Command Line Arguments: 67890
// Expected Output:
// 9876

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int reverseFiveDigitNum(int fiveDigitNum) {
	// Write code here
	int reversedNum=0;
	while(fiveDigitNum>0)
	{
		int digit = fiveDigitNum%10;
		reversedNum=reversedNum*10+digit;
		fiveDigitNum/=10;
		
	}
	return reversedNum;
	
	

}

int main(int argc, char *argv[]) {
	int fiveDigitNum = atoi(argv[1]);
	printf("%d\n", reverseFiveDigitNum(fiveDigitNum));
	return 0;
}
