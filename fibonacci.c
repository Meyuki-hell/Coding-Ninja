#include<bits/stdc++.h>
using namespace std;
//iterative
int main()
{
    int n, prepre, prev = 1, curr = 1;
    cin >> n;
    for( int i = 1; i < n - 1; i++){
        prepre = prev;
        prev = curr;
        curr = prev + prepre;
    }
    cout << curr;
    
}
/*
//Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
//Fibonacci Series is defined by the recurrence
// function
bool checkMember(int n){
	int prepre, prev = 1, curr = 1;
    bool ans = true;
    //cin >> n;
    //num = n;
    
    while(n > curr){
    prepre = prev;
    prev = curr;
    curr = prev + prepre;
    }
    
    if (n == curr){
        ans = true;
    }
    else if(n == 0){
        ans = true;
    }
    else{
      ans = false;
    }

	return ans;

}


*/
