// Problem Statement:
// Coder has find the factors of a number n (i.e., all positive integer values that evenly divide into a number) and then return the ith element of the list, sorted ascending. If there is no ith element, return 0.



// Complete the function ithFactor , and the parameters of the function are:

//     int n: the integer whose factors are to be calculated or found

//     int i: the index of the factor to be returned 



// ithFactor function returns:

//     int: the long integer value of the ith integer factor of n or, if there is no factor at that index, then return 0;



// Constraints to be followed are :

// 1 ≤ n ≤ 1012

// 1 ≤ i ≤ 105



// Sample Test Case:

// Input:

// 10 ( value of n)

// 3 ( value of i)



// Output:

// 5



// Sample test case explained: Factoring n = 10 results in {1, 2, 5, 10}. There are 4 factors and i = 3, therefore at index 3 element 5 is returned as the result.



// Important Instruction: The sample test case is for explanatory purposes but to run your custom test case on the terminal follow the input layout as mentioned in the command line arguments.

// Function Rules:
// Fill the missing logic in function ithFactor with return type long and parameters as listed below:

// long n
// long i
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 10 3
// Expected Output:
// 5

// Test Case 2:
// Command Line Arguments: 10 5
// Expected Output:
// 0


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long ithFactor(long n, long i) {
	int factors[100000];
	int count=0;
	for(int num=1;num<=n;num++)
	{
		if(n%num==0)
		{
			factors[count++]=num;
			
		}
		
	}
	if(i<=count)
	{
		return factors[i-1];
		
	}else
	{
		return 0;
		
	}
	
	
	
	
	
}

int main(int argc, char *argv[]) {
	long n = atol(argv[1]);
	long i = atol(argv[2]);
	printf("%ld\n", ithFactor(n, i));
	return 0;
}
