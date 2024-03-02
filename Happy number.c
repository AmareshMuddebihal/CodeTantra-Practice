// Problem Statement:
// Take any positive integer and sum the squares of its digits. If you repeat this operation on the resultant sum, eventually you’ll either end at 
//  or cycle between the eight values 
// . Any positive integer that ends up with 
//  as the squared digit sum eventually is called a happy number

// For example,

// As can be seen below, 
//  is a happy number:
// On the other hand, we can also see that 
//  is not so happy as the square of 2 is 4 and as we continue summing the squares, we end up with 4 again:
// The function should return the count of happy numbers between n1 and n2, both inclusive. If there are no such numbers, the function should return 
// .

// Constraints:
// n1 and n2 are integers between 1 and 10000, both inclusive
// Function Rules:
// Fill the missing logic in function happyNumbers with return type int and parameters as listed below:

// int n1
// int n2
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 1 10
// Expected Output:
// 3

// Test Case 2:
// Command Line Arguments: 100 200
// Expected Output:
// 13

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sumOfSquares(int num)
{
	
int sum=0;
while(num>0)
{
	int digit = num%10;
	sum+=digit*digit;
	num/=10;
	
}
return sum;
}
int isHappy(int num)
{
	while(num!=1 && num!= 4 )
	{
		num=sumOfSquares(num);
		
	}
	return num==1;
	
}

int happyNumbers(int n1, int n2) {
	// Write code here
	int count = 0;
	for(int i=n1; i<=n2;i++)
	{
		if(isHappy(i))
		{
			count++;
		}
	}
	return count;

}

int main(int argc, char *argv[]) {
	int n1 = atoi(argv[1]);
	int n2 = atoi(argv[2]);
	printf("%d\n", happyNumbers(n1, n2));
	return 0;
}
