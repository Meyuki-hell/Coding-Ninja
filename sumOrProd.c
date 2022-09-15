#include<iostream>
using namespace std;
int sumOrProduct(int a, int c){
    int s = 0, p = 1;
    if( c == 1){
        s = a * (a + 1) / 2;
        return s;
    }
    else if( c == 2){
        for( int i = 1;i <= a; i++){
            p = p * i;
        }
        return p;
    }
    else{
        return -1;
    }
    
}

int main() {
    int n ,b , ans = 0;
    cin >> n >> b;
    ans = sumOrProduct (n , b);
    cout << ans;
    
	// Write your code here
	
}
