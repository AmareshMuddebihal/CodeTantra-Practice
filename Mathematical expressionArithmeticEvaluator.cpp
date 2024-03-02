// Ms. Tracy wants to help her cousin who is studying at school. She wants to build a calculator for her cousin who is not good at maths.

// She decided to take help of an intern at CodeTantra.



// Input Format:

// A single line containing the mathematical expression

// Output Format:

// A single integer containing the result. Print "Invalid" as per the constraints mentioned below.



// Constraints:

// The mathematical expression can consists of spaces, digits and these operators '+', '-', '(' and ')'.
// The mathematical expression represents a valid expression i.e. parenthesis will be balanced.
// If the mathematical expression contains non-integer numbers, print "Invalid"
// '+' is not used as a unary operation (i.e., "+1" and "+(2 + 3)" is Invalid).
// '-' could be used as a unary operation (i.e., "-1" and "-(2 + 3)" is valid).


// Instruction: To run your custom test cases strictly map your input and output layout with the visible test cases.

// Sample Test Cases
// Test Case 1:
// Expected Output:
// 1 + 3
// 4
// Test Case 2:
// Expected Output:
// +(2 + 3)
// Invalid
// Test Case 3:
// Expected Output:
// (1 + (4 + 5 + 2) - 3) + (6 + 8)
// 23
// Test Case 4:
// Expected Output:
// 1.5 + 3.5
// Invalid



 #include <iostream>
  #include <stack>
   using namespace std;
    int precedence(char op) {
    	 if (op == '+' || op == '-')
    	  return 1;
    	   if (op == '*' || op == '/')
    	    return 2;
    	     return 0;
    }
     int applyOp(int a, int b, char op) {
     	 switch (op) {
     	 	 case '+': return a + b;
     	 	  case '-': return a- b;
     	 	   case '*': return a * b;
     	 	    case '/': return a / b;
     	 }
     	  return 0;
     }
      int evaluate(string tokens) {
      	 int i;
      	  stack<int> values;
      	   stack<char> ops;
      	    for (i = 0; i < tokens.length(); i++) {
      	    	 if (i==0 && tokens[i] == '-')
      	    	  continue;
      	    	   if (tokens[i] == ' ')
      	    	    continue;
      	    	     else if (isdigit(tokens[i])) {
      	    	     	 int val = 0;
      	    	     	  while (i < tokens.length() && isdigit(tokens[i])) {
      	    	     	  	 val = (val * 10) + (tokens[i]- '0');
      	    	     	  	  i++;
      	    	     	  }
      	    	     	   values.push(val);
      	    	     	    i--;
      	    	     } else if (tokens[i] == '(') {
      	    	     	 ops.push(tokens[i]);
      	    	     } else if (tokens[i] == ')') {
      	    	     	 while (!ops.empty() && ops.top() != '(') {
      	    	     	 	 int val2 = values.top();
      	    	     	 	  values.pop();
      	    	     	 	   int val1 = values.top();
      	    	     	 	    values.pop();
      	    	     	 	     char op = ops.top();
      	    	     	 	      ops.pop();
      	    	     	 	       values.push(applyOp(val1, val2, op));
      	    	     	 }
      	    	     	  if (!ops.empty())
      	    	     	   ops.pop();
      	    	     } else {
      	    	     	 while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i])) {
      	    	     	 	 int val2 = values.top();
      	    	     	 	  values.pop();
      	    	     	 	   int val1 = values.top();
      	    	     	 	    values.pop();
      	    	     	 	     char op = ops.top();
      	    	     	 	      ops.pop();
      	    	     	 	       values.push(applyOp(val1, val2, op));
      	    	     	 }
      	    	     	  ops.push(tokens[i]);
      	    	     }
      	    }
      	     while (!ops.empty()) {
      	     	 int val2 = values.top();
      	     	  values.pop();
      	     	   int val1 = values.top();
      	     	    values.pop();
      	     	     char op = ops.top();
      	     	      ops.pop();
      	     	       values.push(applyOp(val1, val2, op));
      	     }
      	      return values.top();
      }
       
         int main() {
         	 string expression;
         	 
         	  getline(cin, expression);
         	   for (int i = 0; i < expression.length(); i++) {
         	   	 if(expression[i]== '.') {
         	   	 	 cout<<"Invalid"; goto x;}
         	   }
         	    if(expression[0]== '+')
         	     cout<<"Invalid";
         	      else if(expression[0] == '-')
         	       cout <<-evaluate(expression) ;
         	        else
         	         cout << evaluate(expression) ;
         	          x:
         	           return 0;
         }
