#include <bits/stdc++.h>
#define MAX 100
using namespace std;

class Graph{
public:
    int v;
    int graph[MAX][MAX];

    Graph(int v){
        this->v = v;
    }

    void insertGraph(){
        for(int i=0 ; i<v; i++){
            for(int j =0; j<v; j++){
                cin >> graph[i][j];
            }
        }
    }
};

int minDistance(int dist[] , bool visited[] , int v){
    int min = INT_MAX, index;
    for(int i=0 ; i<v; i++){
        if(visited[i] == false && dist[i] <= min){
            min = dist[i];
            index = i;
        }
    }
    return index;
}

void dijkstra(Graph g, int src){
    int v = g.v;
    int dist[v];
    bool visited[v];

    for(int i=0; i<v; i++){
        dist[i] = INT_MAX;
        visited[i] = false;
    }
    dist[src] = 0;

    for(int i= 0; i<v; i++){
        int m = minDistance(dist , visited, v);
        visited[m] = true;

        for(int j=0; j<v; j++){
            if(!visited[j] && g.graph[m][j] && dist[m] != INT_MAX && dist[m] + g.graph[m][j] < dist[j])
                dist[j] = dist[m] + g.graph[m][j];
        }
    }

    for(int i=0; i<v; i++){
        cout << dist[i] << endl;
    }
}
int main(){
    int v;
    cin >> v;
    Graph g(v);
    g.insertGraph();
    int src;
    cin >> src;
    dijkstra(g, src);
}
