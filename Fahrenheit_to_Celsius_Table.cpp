#include<bits/stdc++.h>
using namespace std;
//iterative
void printtable(int s1,int e1, int w1){
    int cel=0, j;
    //int size = abs(s1 - e1);
    //j=e1;
    int i = 0;
    if(s1 > e1){
        i = e1;
        do{

            cel = (5 * (i - 32) / 9);  
            cout << i << " " << cel << endl;
            i = i + w1;
        }        while(s1 >= i);
    }
    
    else{
        i = s1;
        do
        {
            cel = (5 * (i - 32) / 9); 
            cout << i << " " << cel << endl;
            i = i + w1;
            /* code */
        } while (e1 >= i);
    }
}
int main()
{
    int s, e,w;
    cin >> s >> e >> w;
    printtable(s,e,w);
    //cout << "a";
    return 0;
}
    

