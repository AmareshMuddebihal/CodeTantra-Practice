// Ms. Tracy want to know the total number of primes that are less than a given number N. She gives this task to the new intern at CodeTantra. Help the intern solve the problem with the best timing complexity.



// Input Format:

// One line containing the integer - N

// Output Format:

// One line containing the count of prime numbers that are less than N.

// Sample Input-1:

// 8

// Sample Output-1:

// 4

// Explanation:

// The primes that are less than 8 are 2,3,5,7



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 10
// 4

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int countPrimes(int N){
	if(N<=2){
		return 0;
		
	}
	bool* isPrime=(bool*)malloc((N+1)*sizeof(bool));
	for(int i=2;i<=N;i++)
	{
		isPrime[i]=true;
		
	}
	for(int i=2; i*i<=N;i++)
	{
		if(isPrime[i]){
		for(int j=i*i;j<=N;j+=i){
		isPrime[j]=false;
	}
}


	
}
int count=0;
for(int i=2;i<N;i++)
{
	if(isPrime[i])
	{
		count++;
		
	}
}
free(isPrime);
return count;
}
int main()
{
	int N;
	scanf("%d",&N);
	printf("%d",countPrimes(N));
	return 0;
	
}
