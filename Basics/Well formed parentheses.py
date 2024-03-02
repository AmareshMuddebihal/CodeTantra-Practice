# Given n pairs of parentheses, write a code to count all combinations of well-formed parentheses.

 

# Test case 1:

# Input:

# 3 --------------> n

# Output:

# 5

# Editorial: 5 well formed parentheses are: ["((()))","(()())","(())()","()(())","()()()"]

# Test case 2:

# Input:

# 1

# Output:

# 1

# Editorial: Only one valid formation i.e. ["()"]

 

# Constraints:

# 1 <= n <= 8

# Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

# Sample Test Cases
# Test Case 1:
# Expected Output:
# 1
# 1
# Test Case 2:
# Expected Output:
# 2
# 2
# Test Case 3:
# Expected Output:
# 3
# 5


def abhi_c_rand(n):
	if n <=1:
		return 1
	res =0
	for i in range (n):
		res+=abhi_c_rand(i)*abhi_c_rand(n-i-1)
	return res
	
if __name__=="__main__":
	n=int(input())
	print(abhi_c_rand(n))
