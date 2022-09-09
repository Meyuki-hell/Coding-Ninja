/*
9
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin >> n;
	m = (n + 1) / 2;
	// upper half
    for(int i = 1; i <= m;i++){
        for(int j = m -i ; j >0; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i)-1; k++){
            cout << "*";
        }
        cout << endl;
    }
	// lower half
	int m1 = n - m;
	for(int i = m1; i >= 1; i--){
		for(int j =1;j <= m1-i+1; j++){
			cout <<" ";
		}
		for(int k = (2*i)-1; k >= 1;k--){
			cout<<"*";
		}
		cout<< endl;
	}
	
	
}
