// Problem Statement:
// As can be seen in the table below, for any given k, N is the number formed by concatenating decimal digits in descending order k times repeatedly

// k	N
// 1	9
// 2	98
// 3	987
// 4	9876
// 5	98765
// 6	987654
// 7	9876543
// 8	98765432
// 9	987654321
// 10	9876543210
// 11	98765432109
// 12	987654321098
// 13	9876543210987

// The function should return the smallest non-negative integer that when added to N, makes the sum exactly divisible by d. N is the number formed by concatenating decimal digits in descending order and repeating the process for k total digits.

// For k=2, the value of N is 98.
// If d=9, the smallest value that can be added to N=98 to make it divisible by d=9 is 1. This can be seen from: 98+1=99=9 times11 i.e. 9 X 11.
// Constraints:
// 1 <= k <= 15
// 1 <= d <= 10
// Function Rules:
// Fill the missing logic in function smallestNumber with return type int and parameters as listed below:

// int k
// int d
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 2 4
// Expected Output:
// 2

// Test Case 2:
// Command Line Arguments: 5 3
// Expected Output:
// 1

// Test Case 3:
// Command Line Arguments: 3 3
// Expected Output:
// 0


package q24588;

public class CTJ24588 {

	public static int smallestNumber(int k, int d) {
		// Write your code here
		long n=0;
		long c=0;
		int j;
		for(int i =1;i<=k;i++)
		{
			j=i%10==0?0:(10-(i%10));
			n=n*10+j;
		}
			c=n%d;
			if(c==0)
			return 0;
			else
			return(int)(d-c);
			
		

	}

	public static void main(String[] args) {
		int k = Integer.parseInt(args[0]);
		int d = Integer.parseInt(args[1]);
		System.out.println(smallestNumber(k, d));
	}
}
