#include<bits/stdc++.h>
using namespace std;
 
int findUnique(int *arr, int size){
    int m, c;
   // n = size;
    //bool found = false;
    m = size - 1;
    if(m % 2 != 0){
        return 0;

    }
    else{
        for(int i = 0; i < size; i++){
            c=0;
            for(int j=0; j< size ; j++){

                if (arr[i] == arr[j]){
                    c++;

                }
            }
            if(c == 1){
                //cout<<"s";
                return arr[i];
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
        cout<<findUnique(a,n);
       
        cout <<endl;
    }
    
}
