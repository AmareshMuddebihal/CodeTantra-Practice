// Problem Statement:
// The function should return a boolean whether n can be expressed as the sum of two semi primes or not.

// A semiprime number is an integer that can be expressed as a product of two primes.

// For example:
// 15 = 3*5 is a semiprime number 
// But, 9 = 3*3 is also a semiprime
// Similarly 30 and 13 are not semiprimes as they cannot be expressed as a product of two primes
// Constrains:
//  n is in between 2 and 10000, both inclusive
// Instrcutions: Follow the input and output layout as mentioned in the visible test cases.
// Function Rules:
// Fill the missing logic in function sumOfSemiPrimes with return type boolean and parameters as listed below:

// int n
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 30
// Expected Output:
// true

// Test Case 2:
// Command Line Arguments: 9
// Expected Output:
// false

package q28993;

public class CTJ28993 {

	public static boolean sumOfSemiPrimes(int n) {
		for (int i = 2; i <= n / 2; i++) {
			            if (isSemiPrime(i) && isSemiPrime(n - i)) {
			            	                return true;
			            }
		}
		        return false;
	}
	
	    static boolean isSemiPrime(int n) {
	    	        for (int i = 2; i <= Math.sqrt(n); i++) {
	    	        	            if (n % i == 0) {
	    	        	            	                int factor1 = i;
	    	        	            	                                int factor2 = n / i;
	    	        	            	                                                return isPrime(factor1) && isPrime(factor2);
	    	        	            }
	    	        }
	    	                return false;
	    }
	    
	        static boolean isPrime(int n) {
	        	        if (n <= 1) return false;
	        	                for (int i = 2; i <= Math.sqrt(n); i++) {
	        	                	            if (n % i == 0) return false;
	        	                }
	        	                        return true;
	        
	

	}

	public static void main(String[] args) {
		int n = Integer.parseInt(args[0]);
		System.out.println(sumOfSemiPrimes(n));
	}
}
