// Problem Statement:
// The function should return the sum of the first n Prime numbers.

// A Prime number is any natural number greater than 2 that is not evenly divisible by any numbers other than 1 and itself.

// Constraints
// n is a natural number between 1 and 150, both inclusive
// Test cases will time out if the code is inefficient and it takes longer than 4 seconds for any test case
// Function Rules:
// Fill the missing logic in function sumOfPrimes with return type int and parameters as listed below:

// int n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 1
// Expected Output:
// 2

// Test Case 2:
// Command Line Arguments: 2
// Expected Output:
// 5

// Test Case 3:
// Command Line Arguments: 25
// Expected Output:
// 1060

package q23504;

public class CTJ23504 {

	public static int sumOfPrimes(int n) {
		
			 // Write your code here\
			  int sum=0;
			   int j=2;
			    for(int i=1;i<=n;i++){
			    	 j=nextPrime(j);
			    	  sum=sum+j++;
			    }
			     return sum;
		}
		 static int nextPrime(int n){
		 	 boolean flag=true;
		 	  for(int i=2;i<n;i++){
		 	  	 if(n%i==0)
		 	  	  flag=false;
		 	  }
		 	   if(flag)
		 	    return n;
		 	     else
		 	      return nextPrime(n+1);
		

	}

	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]);
		System.out.println(sumOfPrimes(n));
	}
}

