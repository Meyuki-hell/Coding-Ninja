#include<iostream>
using namespace std;

int main() {
    long long n, r = 0;
    int i;
    cin >> n;
    while( n > 0){
        i = n % 10 ;
        r = (r * 10) + i;
        n = n / 10;
    }
    cout << r <<endl;
	// Write your code here
	
}
