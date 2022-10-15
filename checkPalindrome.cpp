#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[]){
    int len = 0;
    for(int i = 0; str[i] != '\0';i++){
        len++;

    }
    //cout<< len;
    int mid = len / 2;
    for(int i = 0; i<mid; i++){
        if(str[i] == str[len - i -1]){
            continue;
        }
        else{
            return false;
        }
        
    }
    return true;


}
/*int len(char str []){
    int l = 0;
    for(int i = 0; i != )
}*/

int main(){
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
