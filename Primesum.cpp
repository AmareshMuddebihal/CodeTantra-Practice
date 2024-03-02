// Problem Statement:
// The function should return the sum of all the Prime numbers between n1 and n2, both inclusive.

// A Prime number is any natural number greater than 2 that is not evenly divisible by any numbers other than 1 and itself.

// As an example, if n1 is 6 and n2 is 15, then the answer can be computed as 7 + 11 + 13 = 31

// Constraints
// n1 and n2 are any natural numbers between 1 and 10000, both inclusive
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds for any test case
// Function Rules:
// Fill the missing logic in function sumOfPrimes with return type int and parameters as listed below:

// int n1
// int n2
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 15 6
// Expected Output:
// 31

// Test Case 2:
// Command Line Arguments: 1 10
// Expected Output:
// 17


#include <iostream>
using namespace std;
#include <string>
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i * i <= num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
	



int sumOfPrimes(int n1, int n2) {
	// Write code here
	
	
	


		if(n1 > n2) {
			int temp = n1;
			n1 = n2;
			n2 =temp;
		}
		int sum = 0;
		for (int i = n1; i <= n2; i++) {
			if (isPrime(i)) {
				sum += i;
			}
		}
		return sum;
	
		
	

}

int main(int argc, char *argv[]) {
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	cout << sumOfPrimes(n1, n2) << "\n";
	return 0;
}
