// Problem Statement:
// Your are given a positive integer k.

// Your task is to find the geometric sum i.e. 1 + 1/2 + 1/4 + 1/8 + _______ + 1/(2^k)



// Note: Use recursion to implement your solution.






// Your task is to complete function geometricSum with following parameters passed:

// integer k: k is a positive integer defines the limit up to which you have to find the geometric sum.

// Function returns:

// float : Return the geometric sum i.e. as real number.



// Constraints to be followed:

// 0 <= k <= 100

// Sample test case 1:

// Input:

// 3 // value of k

// Output:

// 1.875000 // geometric sum up to 5 decimal places

// Sample test case 2:

// Input:

// 4

// Output:

// 1.937500

// Brief editorial: in test case 1 geometric sum will be calculated as: 1+ 1/(2^1) + 1/(2^2) + 1/(2^3) = 1.875



// Important Instruction : Sample test case is for explanatory purpose but to run your custom test case on the terminal follow the input layout as mentioned in the command line arguments.



// Function Rules:
// Fill the missing logic in function geometricSum with return type float and parameters as listed below:

// int k
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 3
// Expected Output:
// 1.875000e+00

// Test Case 2:
// Command Line Arguments: 4
// Expected Output:
// 1.937500e+00


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float geometricSum(int k) {
	// Write code here
	if(k==0)
	{
		return 1.0;
		
	}
	return geometricSum(k-1)+1.0/(float)(1<<k);

}

int main(int argc, char *argv[]) {
	int k = atoi(argv[1]);
	printf("%1.6e\n", geometricSum(k));
	return 0;
}
