// Problem Statement:
// The function should return the sum of all factors of n. A factor of n is any integer between 1 and n, that divides n evenly. Notice that 1 and n are both always factors of n.

// For example, for 
// , the factors of 
//  are 
// . So the sum of all factors of 
//  is 

// Constraints:

// n is any integer between 1 and 1000, both inclusive
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds to run any test case
// Function Rules:
// Fill the missing logic in function sumOfFactors with return type int and parameters as listed below:

// int n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 6
// Expected Output:
// 12

// Test Case 2:
// Command Line Arguments: 5
// Expected Output:
// 6

// Test Case 3:
// Command Line Arguments: 10
// Expected Output:
// 18


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfFactors(int n) {
	// Write code here
	int sum=1+n;
	for (int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	return sum;
	

}

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	printf("%d\n", sumOfFactors(n));
	return 0;
}
