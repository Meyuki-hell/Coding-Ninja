#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long int i = 1, temp, ans = 0;
    cin >> n;
    while( n > 0){
        temp = n % 2;
        if( temp == 0){
            i *= 10;
            n /= 2;
            
        }
        else{
            ans = ans + temp * i;
            i *= 10;
            n /= 2;
            
        }
    }
    cout << ans << endl;
	// Write your code here
	
}
