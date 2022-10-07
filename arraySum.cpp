#include<iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum;
    /* Read input as specified in the question.
     * Print output as specified in the question.
     */
    
}
