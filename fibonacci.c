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
