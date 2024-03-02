# As you know the CodeTantra building in which Mr. Code Stark stays is a very tall building. One day Mr. Code Stark decided to reach his seat by climbing the stairs instead of using the lift. As he was climbing the stairs, he observed that he can either take 1 step at a time or 2 steps at a time.



# He created the following puzzle for his secretary, Ms. Tracy, for the day:

# If there are N steps to be climbed to reach the destination, each time if the person is able to take either 1 step or 2 steps at a time, in how many distinct ways can he/she reach the top.



# Input Format:

# One line containing the integer n, the number of steps.



# Output Format:

# One line containing the integer - the total number of distinct ways to reach the top.



# Constraints:

# The number of stairs is less than or equal to 50.
# The code should be optimized. If the code longer to run for large test cases, then you will not get complete score.


# Sample Input-1:

# 2

# Sample Output-1:

# 2

# Explanation:

# Option 1: 1 Step + 1 Step

# Option 2: 2 Steps



# Sample Input-2:

# 3

# Sample Output-2:

# 3

# Explanation:

# Option 1: 1 Step + 1 Step + 1 Step

# Option 2: 2 Steps + 1 Step

# Option 3: 1 Step + 2 Steps



# Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

# Sample Test Cases
# Test Case 1:
# Expected Output:
# 2
# 2
# Test Case 2:
# Expected Output:
# 3
#  3

def count(n):
	if n<=1:
		return 1
		
	ways=[0]*(n+1)
	ways[0]=1
	ways[1]=1
	for i in range (2,n+1):
		ways[i]=ways[i-1]+ways[i-2]
			
	return ways[n]
if  __name__ == "__main__":
			 	
	n= int(input())
	result=count(n)
	print (result)
