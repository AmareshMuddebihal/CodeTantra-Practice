// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

// In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

 

// Test case 1:

// Input:

// rowIndex = 3

// Output:

// [1,3,3,1]

// Test case 2:

// Input: rowIndex = 0

// Output: [1]

// Test case 3:

// Input:

// rowIndex = 1

// Output: [1,1]

 

// Constraints:

// 0 <= rowIndex <= 33
 

// Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?



// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 3
// 1·3·3·1·
// Test Case 2:
// Expected Output:
// 0
// 1·
// Test Case 3:
// Expected Output:
// 1
// 1·1·


#include <iostream>
#include <vector>
using namespace std;
vector<int> getRow(int rowIndex) {
	vector<vector<int>> tria(rowIndex + 1);
	int colNum = 1;
	for (int r = 0; r <= rowIndex; r++) {
		vector<int> row(colNum, 1);
		tria[r] = row;
		for (int c = 1; c < colNum - 1; c++){
			    tria[r][c] = tria[r - 1][c - 1] + tria[r - 1][c];
		}
		colNum++;
	}
	return tria[rowIndex];
}
int main() {
	int rowIndex;
	// Get user input for row index
	//cout << "Enter the row index: ";
	cin >> rowIndex;
	// Validate input
	if (rowIndex < 0) {
		//cout << "Invalid row index. Please enter a non-negative integer." << endl;
		return 1; // Exit with error code
	}
	// Get and print the row
	vector<int> result = getRow(rowIndex);
	// cout << rowIndex << ": ";
	for (int num : result) {
		cout << num << " ";
	}
	return 0; // Exit successfully
}
