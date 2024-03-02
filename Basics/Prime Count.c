// Ms. Harrison want to know the total number of primes that are between a given lower limit L and a given upper limit U. She gives this task to the new intern at CodeTantra. Help the intern solve the problem with the best timing complexity.



// Input Format:

// One line containing two integers L and U separated by a space.

// Output Format:

// One line containing the count of prime numbers that are between L and U.

// Sample Input-1:

// 1 8

// Sample Output-1:

// 4

// Explanation:

// The primes that are between 1 and 8 are 2,3,5,7



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 1


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>
int countPrimesBetween(int L,int U){
	 int segmentSize= U - L + 1;
	  bool* isPrime=(bool*)malloc(segmentSize * sizeof(bool));
	   for(int i=0;i<segmentSize;i++){
	   	 isPrime[i]=true;
	   }
	    for(int i=2;i*i<=U;i++){
	    	 for(int j=fmax(i*i,(L+i-1)/i*i);j<=U;j +=i){
	    	 	 if(j>=L){
	    	 	 	 isPrime[j - L]=false;
	    	 	 }
	    	 }
	    }
	     int count=0;
	      for(int i=L;i<=U;i++){
	      	 if(isPrime[i-L]){
	      	 	 count++;
	      	 }
	      }
	       free(isPrime);
	        return count;
}
int main()
{
	 int L,U;
	  scanf("%d %d", &L, &U);
	   L=(L<2) ? 2 :L;
	   printf("%d\n", countPrimesBetween(L, U));
	    return 0;
}
