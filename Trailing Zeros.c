// Ms. Tracy just learnt about the concept of factorials. She learnt the logic of calculating factorial using both recursion and iteration.

// She observed a very important aspect of factorial that most of the factorial values end with multiple zeros.

// For example:

// 5! = 120 (Ending with 1 zero)

// 6! = 710 (Ending with 1 zero)

// 10! = 3628800 (Ending with 2 zeros)

// Ms. Tracy was about to interview a new intern, she decided to give the following question to him.



// Given a number n, find the total number of trailing zeros at the end of the n!

// Input Format:

// One line that contains the number n.

// Output Format:

// One line that contains the total number of trailing zeros at the end of n!

// Sample Input-1:

// 5

// Sample Output-1:

// 1



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.



// Sample Test Cases
// Test Case 1:
// Expected Output:
// 5
// 1

#include<stdio.h>
int countTrailingZeros(int n)
{
	int count=0;
	while(n>=5)
	{
		n/=5;
		count+=n;
		
	}
	return count;
	
}
int main()
{
	int n ;
	scanf("%d", &n);
	printf("%d\n",countTrailingZeros(n));
	return 0;
	
}
