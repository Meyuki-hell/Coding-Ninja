/*
input: 4
output:
   *
  ***
 *****
*******


*/
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    for(int i = 1; i <=n ;i++){
        for(int k = n-i; k >=1; k--){
            cout << " ";
        }
        int j = 1;
        for(j= 1; j <= i ; j++){
            cout << "*";
        }
        //j = i - 1;
        for(j = i - 1; j >= 1; j--){
            cout << "*";
        }

        cout << endl;
    }

       /*  Read input as specified in the question.
    * Print output as specified in the question.
    */
  
}
