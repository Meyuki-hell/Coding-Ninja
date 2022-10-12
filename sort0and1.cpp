#include<bits/stdc++.h>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    int countz = 0;
    int a[size];
   

    for(int i = 0; i < size; i++){
        if( input[i] == 0){
            ++countz;
        }
      
    }
    
    for(int i = 0; i < countz; i++){
        a[i] = 0;    

    }
    for(int j = countz; j < size; j++){
        a[j] = 1;
    }
    for(int i = 0; i < size; i++){
       
        input[i] = a[i];
    }
    //Write your code here
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        sortZeroesAndOne(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        
    }

    return 0;
}
