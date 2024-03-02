// You are given an integer n. A 0-indexed integer array nums of length n + 1 is generated in the following way:

// nums[0] = 0
// nums[1] = 1
// nums[2 * i] = nums[i] when 2 <= 2 * i <= n
// nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
// Print the maximum integer in the array nums​​​.

 

// Test case 1:

// Input:

// n = 7

// Output:

// 3

// Explanation: According to the given rules:

// nums[0] = 0

// nums[1] = 1

// nums[(1 * 2) = 2] = nums[1] = 1

// nums[(1 * 2) + 1 = 3] = nums[1] + nums[2] = 1 + 1 = 2

// nums[(2 * 2) = 4] = nums[2] = 1

// nums[(2 * 2) + 1 = 5] = nums[2] + nums[3] = 1 + 2 = 3

// nums[(3 * 2) = 6] = nums[3] = 2

// nums[(3 * 2) + 1 = 7] = nums[3] + nums[4] = 2 + 1 = 3

// Hence, nums = [0,1,1,2,1,3,2,3], and the maximum is max(0,1,1,2,1,3,2,3) = 3.

// Test case 2:

// Input:

// n = 2

// Output:

// 1

// Explanation: According to the given rules, nums = [0,1,1]. The maximum is max(0,1,1) = 1.

// Test case 3:

// Input:

// n = 3

// Output:

// 2

// Explanation: According to the given rules, nums = [0,1,1,2]. The maximum is max(0,1,1,2) = 2.

 

// Constraints:

// 0 <= n <= 100


// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 7
// 3
// Test Case 2:
// Expected Output:
// 2
// 1
// Test Case 3:
// Expected Output:
// 3
// 2


 #include <iostream>
 #include <vector>
   int getMaxValue(int n) {
   	 if (n == 0) {
   	 	 return 0;
   	 }
   	  std::vector<int> nums(n + 1, 0);
   	   nums[1] = 1;
   	    for (int i = 1; 2 * i <= n; ++i) {
   	    	nums[2 * i] = nums[i];
   	    	 if (2 * i + 1 <= n) {
   	    	 	 nums[2 * i + 1] =nums[i] + nums[i + 1];
   	    	 }
   	    }
   	     int maxValue = 0;
   	      for (int num : nums) {
   	      	 maxValue = std::max(maxValue, num);
   	      }
   	       return maxValue;
   }
    int main() {
    	 int n;
    	  // Get user input for n
    	   //std::cout << "Enter the value of n: ";
    	    std::cin >> n;
    	     // Calculate and print the maximum value
    	      int result = getMaxValue(n);
    	       std::cout << result << std::endl;
    	        return 0;
    }
