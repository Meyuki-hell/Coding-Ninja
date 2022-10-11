#include<bits/stdc++.h>
using namespace std;
 
int pairSum(int *input, int size, int x)
{
    int k=0;
    for(int i = 0; i < size -1;i++){
        for(int j = i+1; j < size; j++){
            if(input[i] + input[j] ==x){
                k += 1;
                
            }
        }
    }
    return k;
}
int main() {

    int t,m=0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;        
        int a[n];
        for(int i = 0; i < n; i++){

            cin >> a[i]; 
        }
        int k;
        cin >> k;
        m = pairSum(a,n,k);
        cout << m;
        cout <<endl;
    }
    
}
