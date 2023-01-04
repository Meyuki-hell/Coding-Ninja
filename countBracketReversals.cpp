#include<stack>
int countBracketReversals(string input) {
	// Write your code here
	if(input.length() % 2 != 0){
		return -1;
	}
	stack<char> s;
	for(int i = 0; i < input.length(); i++){
		if(input[i] == '{'){
			s.push(input[i]);

		}
		else{
			if(!s.empty() && s.top() == '{'){
				s.pop();
			}
			else{
				s.push(input[i]);
			}
		}
	}

	int a = 0 ;
	while(s.empty() == false){
		char c = s.top();
		s.pop();
		char d = s.top();
		s.pop();
		if(c == d){
			a++;
		}
		else{
			a = a + 2;
		}
	}
	return a;
}
