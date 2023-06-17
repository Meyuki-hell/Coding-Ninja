#include <bits/stdc++.h> 
long long (int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long sum = 0;
    long long maxSum = 0;

    for(int i = 0; i < n; i++){
        if(sum + arr[i] < 0){
            sum = 0;

        }
        else{
            sum += arr[i];
            if(maxSum < sum){
                maxSum = sum;
            }
        }
    }
    return maxSum;
}
