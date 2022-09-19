#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int character = 0, digits = 0, whitespace = 0;
	c = cin.get();
	while(c != '$'){
		if(c >= 'a' && c <= 'z' ){
			character++;
		}
		else if(c >= '0' && c <= '9'){
			digits++;
		}
		else if(c == '\n' || c == '\t' || c == ' '){
			whitespace++;
		}
		c = cin.get();
	}
	cout << character << " "<< digits<< " "<< whitespace;
}
