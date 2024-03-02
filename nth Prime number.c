// Problem Statement:
// The function should return the nth Prime number.

// A Prime number is any natural number greater than 2 that is not evenly divisible by any numbers other than 1 and itself.

// Constraints
// n is a natural number between 1 and 1000, both inclusive
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds for any test case
// Function Rules:
// Fill the missing logic in function prime with return type int and parameters as listed below:

// int n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 1
// Expected Output:
// 2

// Test Case 2:
// Command Line Arguments: 3
// Expected Output:
// 5

// Test Case 3:
// Command Line Arguments: 10
// Expected Output:
// 29


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int isPrime(int num){
if(num<=1)
	{
		return 0;
		
	}
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0)
		{
			return 0;
			
		}
	}
	return 1;
}

int prime(int n) {


	if(n<=0)

{
	return 0;
	
}
int count = 0;
int num=2;
while(count<n)
{
	if(isPrime(num)){
	count++;
	
}
if (count<n)
{
	num++;
	
}
}
return num;


	// Write code here

}

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	printf("%d\n", prime(n));
	return 0;
}
