# Mr. Jango was surprised to hear about the Roman numerals. The Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M each representing a value as shown below. These symbols are connected together to represent any number.

# Symbol       Value
# I             1
# V             5
# X             10
# L             50
# C             100
# D             500
# M             1000
# For example, 

# 2 is written as II in Roman numeral, just two one's added together.

# 12 is written as XII, which is simply X + II.

# The number 27 is written as XXVII, which is XX + V + II.



# Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

# I can be placed before V (5) and X (10) to make 4 and 9. 
# X can be placed before L (50) and C (100) to make 40 and 90. 
# C can be placed before D (500) and M (1000) to make 400 and 900.


# Now Help Mr. Code Stark write the logic to find the value of a given Roman numeral

# Input Format:

# One line containing the roman numeral

# Output Format:

# The value of the Roman numeral



# Sample Input-1:

# XIV

# Sample Output-1:

# 14

# Explanation:

# The value of the roman numeral XIV is 14.

# Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

# Sample Test Cases
# Test Case 1:
# Expected Output:
# XIV
# 14

def roman_int(s):
	roman_values ={
		'I':1,
		'V':5,
		'X':10,
		'L':50,
		'C':100,
		'D':500,
		'M':1000
		
	}
	result= 0
	i=0
	while i<len (s):
		if i+1<len(s)and roman_values[s[i]]<roman_values[s[i+1]]:
			result +=roman_values[s[i+1]]-roman_values[s[i]]
			i+=2
		else:
			result +=roman_values[s[i]]
			i+=1
	return result
				
if __name__ == "__main__":
	roman_numeral=input("")
	result=roman_int(roman_numeral.upper())
	print(result)
