#include <bits/stdc++.h>
using namespace std;

int i = 1;

int print(int n) {
 
  if(n != 0){
    cout<< i<< " ";
    i++;
    print(n-1);
  }
  
}


int main(){
  int n;
  cin >> n;
  print(n);
}
