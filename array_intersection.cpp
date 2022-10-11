#include<bits/stdc++.h>
using namespace std;
 
void intersection(int *input1, int *input2, int size1, int size2)
{
    
    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2;j++){
            if(input1[i] == input2[j]){

                cout << input1[i] << " ";
                input2[j] = -2147483648;
                break;
            }
        } 
    }
}
int main() {

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;        
        int a[n];
        for(int i = 0; i < n; i++){

            cin >> a[i]; 
        }
        int m;
        cin >> m;
        int b[m];
        for(int i = 0; i < n; i++){

            cin >> b[i]; 
        }

        intersection(a,b,n,m);
       
        cout <<endl;
    }
    
}
