#include <bits/stdc++.h>
using namespace std;

class Edge{
    public :
        long source;
        long destination;
        long weight;
};

class Subset{
    public:
        long parent;
        long rank;
};

bool comWeight(Edge e1, Edge e2){
    return (e1.weight < e2.weight);
}

long find(long s,long *parent){
    if(s == parent[s]){
        return s;
    }
    return find(parent[s], parent);
}

void Union(Edge *output, Edge *input, long v, long *parents){
    long count = 0, i = 0;
    while(count < (v - 1)){
        long ps = find(input[i].source, parents);
        long pd = find(input[i].destination, parents);
        if(ps != pd){
            output[count] = input[i];
            count++;
            parents[ps] = parents[pd];
        }
        i++;
    } 
}

int main() {
    // Write your code here
    long v, e;
    cin >> v>> e;
    Edge *input = new Edge[e];
    for(int i = 0; i < e; i++){
        cin >> input[i].source >> input[i].destination >> input[i].weight;
    }
    sort(input, input + e, comWeight);

    long *parents = new long[v];
    for(long i = 0; i < v; i++){
        parents[i] = i;
    }
    Edge *output = new Edge[v - 1];
    Union(output, input, v, parents);

    for(long i = 0; i < (v-1); i++){
        cout << min(output[i].source, output[i].destination) <<" "<< max(output[i].source, output[i].destination) <<" "<< output[i].weight << "\n";
    }
}
