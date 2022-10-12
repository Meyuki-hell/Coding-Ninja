#include<bits/stdc++.h>
using namespace std;

int tripletSum(int *input, int size, int x)
{
    int i, j, k;
    int b = 0;
    for( i = 0; i < size-2 ; i++){
        for(j = i+1; j < size-1 ; j++){
            for( k = j+1; k < size ; k++){
                if (x == input[i] + input[j] + input[k] ){
                    b++;
                }
            }
        }

    }return b;
            
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int size;
        int x;
        cin >> size;

        int input[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        cin >> x;
        //cout<<"oo";
        cout << tripletSum(input, size, x) << endl;

       // delete[] input;
    }

    return 0;
}
