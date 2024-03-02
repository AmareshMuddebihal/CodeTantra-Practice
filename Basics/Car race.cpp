// Problem Statement:
// Three Cars entered a race around a track. Car A takes N1 minutes to run one lap. Car B takes N2 minutes to run one lap and it takes Car C N3 minutes to run one lap. If all three Cars begin the race at the same time, how many minutes will it take for all three cars to be at the starting point again?

// Complete the function CarRace with the following parameter(s):

//   integers N1 , N2 and N3 representing time taken by each car.

// Function returns:

//       Time taken by all three cars to be at the starting point again.

// Sample test case :

// Input :

// 3 6 5

// Output :

// 30



// Hint : Use your basic mathematics of LCM to solve this problem

// Constraints :

// 1 < = N1,N2,N3 <= 10000

// Important Instruction : Sample test case is for explanatory purpose but to run your custom test case on the terminal follow the input layout as mentioned in the command line arguments.

// Function Rules:
// Fill the missing logic in function CarRace with return type int and parameters as listed below:

// int N1
// int N2
// int N3
// Sample Test Cases
// Test Case 1:
// Command Line Arguments: 3 6 5
// Expected Output:
// 30

// Test Case 2:
// Command Line Arguments: 14 8 9
// Expected Output:
// 504

// Test Case 3:
// Command Line Arguments: 1 2 3
// Expected Output:
// 6

#include <iostream>
using namespace std;
#include <string>


#include<vector>
int gcd(int a, int b) {
	while (b > 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
int gcd(const std::vector<int>& input) {
	int result = input[0];
	for (size_t i = 1; i < input.size(); i++) {
		result = gcd(result, input[i]);
	}
	return result;
}
int lcm(int a, int b) {
	return a * (b / gcd(a, b));
}
int lcm(const std::vector<int>& input) {
	int result = input[0];
	for (size_t i = 1; i < input.size(); i++) {
		result = lcm(result, input[i]);
	}
	return result;
}



int CarRace(int N1, int N2, int N3) {
	// Write code here
	std::vector<int> numbers = {N1, N2, N3};
	int lcmResult = lcm(numbers);
	return lcmResult;

	
	

}

int main(int argc, char *argv[]) {
	int N1 = atoi(argv[1]);
	int N2 = atoi(argv[2]);
	int N3 = atoi(argv[3]);
	cout << CarRace(N1, N2, N3) << "\n";
	return 0;
}
