// Mr. Code Stark got a chance to travel by the Vande Bharat Express, also known as Train 18 which is a semi-high-speed, electric multiple-unit train operated by Indian Railways. It was designed and manufactured by the government-owned Integral Coach Factory (ICF), located in Chennai.

// He understood the seating layout of the train using the image below.





// As you know, Mr. Code Stark wants to always take the window seat. He wants you to write a code to print the type of the seat given its number as per the layout mentioned above.



// Input Format:

// A single containing the integer seat number

// Output Format:

// A single string indicating the seat type of the given seat number. The seat type can be "WINDOW" or "MIDDLE" or "AISLE"



// Sample Input - 1

// 34

// Sample Output - 1

// WINDOW



// Sample Input - 2

// 26

// Sample Output - 2

// MIDDLE



// Sample Input - 3

// 77

// Sample Output - 3

// AISLE

// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 1
// WINDOW
// Test Case 2:
// Expected Output:
// 2
// MIDDLE
// Test Case 3:
// Expected Output:
// 3
// AISLE
// Test Case 4:
// Expected Output:
// 4
// WINDOW
// Test Case 5:
// Expected Output:
// 5
// WINDOW
// Test Case 6:
// Expected Output:
// 6
// MIDDLE
// Test Case 7:
// Expected Output:
// 7
// AISLE


#include <stdio.h>

char* seat_type(int s) {
	    if (s == 1 || s == 5 || s == 10 || s == 15 || s == 20 || s == 25 || s == 30 || s == 35 || s == 40 || s == 45 || s == 50 || s == 55 || s == 60 || s == 65 || s == 70 || s == 75 || s == 4 || s == 9 || s == 14 || s == 19 || s == 24 || s == 29 || s == 34 || s == 39 || s == 44 || s == 49 || s == 54 || s == 59 || s == 64 || s == 69 || s == 74 || s == 78) {
	    	        return "WINDOW";
	    } else if (s == 2 || s == 6 || s == 11 || s == 16 || s == 21 || s == 26 || s == 31 || s == 36 || s == 41 || s == 46 || s == 51 || s == 56 || s == 61 || s == 66 || s == 71 || s == 76) {
	    	        return "MIDDLE";
	    } else {
	    	        return "AISLE";
	    }
}

int main() {
	    int seat_number;
	        scanf("%d", &seat_number);
	            char* result = seat_type(seat_number);
	                printf("%s\n", result);
	                    return 0;
}
