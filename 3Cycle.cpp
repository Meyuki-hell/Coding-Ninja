#include <iostream>
using namespace std;

int cycles3(bool **edges, int n){
    int count = 0;
     for(int i = 0; i< n; i++){
         for(int j =0; j <n; j++){
             if(i != j && edges[i][j] == 1){
                 for(int k = 0; k < n; k++){
                     if(j != k && k != i && edges[j][k] == 1){
                         if(edges[i][k] == 1){
                             count++;
                         }
                     }
                 }
             }
         }
     }
     return count;
}

int main() {
    // Write your code here
    int m, n;
    cin >> n >> m;
    bool **edges = new bool *[n];
    for(int i = 0; i < n; i++){
        edges[i]= new bool[n];
        for(int j = 0; j < n; j++){
            edges[i][j] = false;
        }
    }

    for(int i = 0; i < m; i++){
        int start, end;
        cin >> start >> end;
        edges[start][end] = true;
        edges[end][start] = true;
    }

    cout << cycles3(edges, n) / 6;
    return 0;
}
