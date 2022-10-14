#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *input, int size){
    
    for(int j = 0; j < size-1 ; j++){
        int min = input[j], minIndex = j;
        for(int i = j+1; i < size; i++){
            if(input[i] < min){
                min = input[i];
                minIndex = i; 
                
            }
        }
        int temp = input[j];
        input[j] = input[minIndex];
        input[minIndex] = temp;
    } 

}
int main(){
    int n;
    cin >>  n;
    int a[n];
    for(int i = 0; i< n;i++){
        cin >> a[i];
    }
    selectionSort(a,n);
    for(int i = 0; i < n; i++){
        cout << a[i]<< " ";
    }
    return 0;

}
