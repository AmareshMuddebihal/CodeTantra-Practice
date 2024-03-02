// Ms. Tracy has started doing her research on the digit 0. As a part of her exploration, for a given number N she started writing all the whole numbers from 1 to N (included) on the paper and started counting the number of zeros. She wants to find if there is any pattern in these number of 0 digits.

// Because writing the numbers on paper and counting is tedious, she wants your help to program this solution.



// Note: Assume that there are no leading zeros written for any number.



// Input Format:

// A single line containing the whole number N

// Output Format:

// A single line containing the number of zero digits.



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 12
// 1
// Test Case 2:
// Expected Output:
// 9
// 0

#include <iostream>

int countZeros(int n) {
	    int count = 0;
	        for (int i = 1; i <= n; ++i) {
	        	        int num = i;
	        	                while (num > 0) {
	        	                	            if (num % 10 == 0) {
	        	                	            	                ++count;
	        	                	            }
	        	                	                        num /= 10;
	        	                }
	        }
	            return count;
}

int main() {
	    int N;
	        std::cin >> N;
	            std::cout << countZeros(N);
	                return 0;
}
