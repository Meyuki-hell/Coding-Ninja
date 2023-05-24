#include <iostream>
using namespace std;
#include <queue>

void print(bool **edges, long long v, long long s, bool *visited){
    queue<long long> pendVer;
    pendVer.push(s);
    visited[s] = true;
    while(!pendVer.empty()){
        cout << pendVer.front() << " ";
        for(long long i =0; i < v; i++){
            if(i == pendVer.front())
                continue;
            if(visited[i])
                continue;
            if(edges[pendVer.front()][i]){
                pendVer.push(i);
                visited[i] = true;
            }
        }
        pendVer.pop();
    }
}

int main() {
    // Write your code here
    long long v, e;
    cin >> v >> e;
    bool **edges = new bool *[v];
    for(long long i = 0; i < v; i++){
        edges[i] = new bool[v];
        for(long long j = 0; j < v; j++){
            edges[i][j] = false;
        }
    }
    for(long long i = 0; i < e; i++){
        long long start, end;
        cin >> start >> end;
        edges[start][end] = true;
        edges[end][start] = true;
    }

    bool *visited = new bool[v];
    for(long long i = 0; i < v; i++){
        visited[i] = false;
    }
    for(long long i = 0; i < v; i++ ){
        if(!visited[i])
            print(edges, v, i, visited);
    }
    delete[] visited;
    for(long long i = 0; i < v; i++)
    {
        delete edges[i];
    }
    delete[] edges;
    return 0;
}
