// Problem Statement:
// The function should return the product of all factors of n. A factor of n is any integer between 1 and n, that divides n evenly. Notice that 1 and n are both always factors of n.

// For example, for 
// , the factors of 
//  are 
// . So the product of all factors of 
//  is 

// Constraints:

// n is any integer between 1 and 50, both inclusive
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds to run any test case
// Function Rules:
// Fill the missing logic in function productOfFactors with return type int and parameters as listed below:

// int n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 6
// Expected Output:
// 36

// Test Case 2:
// Command Line Arguments: 5
// Expected Output:
// 5

// Test Case 3:
// Command Line Arguments: 10
// Expected Output:
// 100

#include <iostream>
using namespace std;
#include <string>
#include<bits/stdc++.h>

int productOfFactors(int n) {
	// Write code here
	
	int result = 1;
	for (int i = 1; i <= n; ++i) {
		if (n % i == 0) {
			result *= i;
		}
	}
	return result;
		

}

int main(int argc, char *argv[]) {
	int n = atoi(argv[1]);
	cout << productOfFactors(n) << "\n";
	return 0;
}
