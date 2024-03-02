// Problem Statement:
// The function should return a boolean indicating whether n is a palindromic number or not. A palindromic number is one whose reverse is exactly same as itself.

// Constraints:

// n is any non-negative integer
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds to run any test case
// Function Rules:
// Fill the missing logic in function isPalindrome with return type int and parameters as listed below:

// long n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 909
// Expected Output:
// true

// Test Case 2:
// Command Line Arguments: 300
// Expected Output:
// false




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPalindrome(long n) {
	// Write code here
	int originalNum= n;
	int reverseNum= 0;
	while(n>0)
	{
		int digit = n%10;
		reverseNum = reverseNum*10+digit;
		n/=10;
		
	}
	return(originalNum==reverseNum);
	

}

int main(int argc, char *argv[]) {
	long n = atol(argv[1]);
	printf(isPalindrome(n) ? "true\n" : "false\n");
	return 0;
}
