#include<bits/stdc++.h>
bool checkRedundantBrackets(string expression) {
	// Write your code here
    stack<char> s;
    for (int i = 0; i < expression.length(); i++) {
    if (expression[i] != ')') {
       s.push(expression[i]);

     }
    else if (expression[i] == ')') {
      int count = 0;
      while (s.top() != '(') {
          count++;
          s.pop();
        }
      if (count <= 1) {
        return true;
        }
      s.pop();
    }
  }
  return false;
}
