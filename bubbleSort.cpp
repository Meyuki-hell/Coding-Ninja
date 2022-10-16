#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int *input, int size)
{
    bool swapped;
    for(int j = 0; j < size-1; j++){
        swapped = false;
        for(int i = 0; i < size-1-j;i++){
            if(input[i] > input[i+1]){

                int temp = input[i];
                input[i] = input[i+1];
                input[i+1]= temp;
                swapped = true;
               
            }
        }
        if(swapped == false){
            break;
        }
    }
     
  
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        bubbleSort(a, n);
        cout << endl;
    }

}
