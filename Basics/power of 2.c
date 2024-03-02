// Ms. Tracy recently learnt that 2 is the base of the binary numeral system, powers of two are common in computer science. She wanted to test the coding skills of the newly joined intern and she decided to give the following problem statement



// Given a number n find the nearest integer which is a power of 2. If the number n is equidistant from two powers of 2, then print the higher one.



// Input Format:

// A single line that contains the integer n

// Output Format:

// A single line that contains the nearest power of 2.



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 5
// 4
// Test Case 2:
// Expected Output:
// 31
// 32
// Test Case 3:
// Expected Output:
// 3
// 4


#include<stdio.h>
#include<math.h>
int nearestPowerOf2(int n ){
	int low =(int)pow(2, floor(log2(n)));
	int high=(int)pow(2, ceil(log2(n)));
	return (n-low<high-n)? low:high;
	
}
int main()
{
	int n ;
	scanf("%d",&n);
	int result=nearestPowerOf2(n);
	printf("%d\n",result);
	return 0;
	
}
