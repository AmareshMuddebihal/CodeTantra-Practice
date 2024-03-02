// Problem Statement:
// The function should calculate and return the Least Common Multiple (LCM) of n1, n2 and n3.

// LCM can be calculated by listing out the multiples of the given numbers and finding the smallest multiple that is common to all the numbers..

// Constraints:

// n1, n2 and n3 are integers between 1 and 1000000, both inclusive
// Test cases will time out if the code is inefficient and takes longer than 4 seconds for any test case
// Function Rules:
// Fill the missing logic in function findLCM with return type int and parameters as listed below:

// int n1
// int n2
// int n3
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 25 50 100
// Expected Output:
// 100

// Test Case 2:
// Command Line Arguments: 21 7 35
// Expected Output:
// 105

// Test Case 3:
// Command Line Arguments: 11 7 3
// Expected Output:
// 231


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findGCD(int a ,int b )
{
	while(b!=0)
	{
		int temp = b ;
		b =a%b;
		a=temp;
		
	}
	return a;
	
}

int findLCM(int n1, int n2, int n3) {
	// Write code here
	int gcd1=findGCD(n1,n2);
	int lcm1=(n1/gcd1)*n2;
	int gcd2=findGCD(lcm1,n3);
	int lcm = (lcm1/gcd2)*n3;
	return lcm;
	
	

}

int main(int argc, char *argv[]) {
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	int n3 = atoi(argv[3]);
	printf("%d\n", findLCM(n1, n2, n3));
	return 0;
}

