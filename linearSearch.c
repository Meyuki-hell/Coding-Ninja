#include<bits/stdc++.h>
using namespace std;
//iterative
 
int linearSearch(int *arr, int n, int x)
{
    bool found = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            found = true;
            return i;
        }
       
    }
    if (found == false){
        return (-1);
    }
    //Write your code here
}
int main() {

    int t, ls = 0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int x;
        cin >> x;// the element to be searched
        ls = linearSearch(a ,n ,x);
        cout << ls << endl;
        //cout<< a[0];
    }
    
}
