#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int num=0, i = 0, temp,p=0;
    cin >> n;
    while( n > 0){
        temp = n % 10;
        if( temp == 0){
            i++;
            n /= 10;
            
        }
        else{
            p = pow( 2 , i);
            num += p;
            i++;
            n /= 10;
        }
    }
    cout << num << endl;
	// Write your code here
	
}
