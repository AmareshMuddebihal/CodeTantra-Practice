// Today, Ms. Tracy learnt a special property about the sum of squares of the digits. Any positive integer N, replace the number by the sum of the squares of its digits. If this process is repeated endlessly until the number equals 1 (where it will stay), or it loops endlessly in a cycle of (89,145,42,20,4,16,37,58) which does not include 1. The numbers for which the number equals 1 are Ms. Tracy's favourite numbers. She wants your help to find if a given number is her favourite or not.



// Input Format:

// One line containing the integer

// Output Format:

// Yes - If the number is Ms. Tracy's favourite number.

// No - If the number is not Ms. Tracy's favourite number.



// Sample Input-1:

// 123

// Sample Output-1:

// No

// Explanation:

// 123 => 12 + 22 + 32 => 14 => 12 + 42 => 17 => 12 + 72 => 50 => 52 + 02 => 25 => 22 + 52 => 29 => 22 + 92 => 85 => 82 + 52 => 89 => 82 +92 => 145 => 12 + 42 + 52 => 42 => 42 + 22 => 20 => 22 + 02 => 4 => 42 => 16 => 12 + 62 => 37 => 32 + 72 => 58 => 52 + 82 => 89 ...

// The loop resulted in the loop of 89 so it is not a favourite number of Ms. Tracy.



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 123
// No
// Test Case 2:
// Expected Output:
// 19
// Yes


#include<stdio.h>

int sumOfSquares(int num)
{
	int sum=0;
	while (num>0)
	{
		int digit=num%10;
		sum+=digit*digit;
		num/=10;
		
	}
	return sum;
	
}
int isMsTracyfavorite(int num)
{
	while(num!=1&&num!=89)
	{
		num=sumOfSquares(num);
		
	}
	return num==1;
	
}
int main()
{
	int num;
	scanf("%d",&num);
	if(isMsTracyfavorite(num))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
		
	}
	return 0;
}

		
