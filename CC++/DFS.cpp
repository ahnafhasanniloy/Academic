#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n,k; 
    cin >>n>>k;
    vector<vector<int>> graph(n);
    for(int i = 0; i<k; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    //DFS
    int start_node = 0;
    bool visited[n];

    for(int i=-0; i<n; i++){
        visited[i] = false;
    }
    stack<int>q;
    visited[start_node] = true;
    q.push(start_node);

    while(!q.empty()){
        int m = q.top();
        cout<<m<<" ";
        q.pop();
        for(int i=0; i<graph[m].size(); i++){
            int item = graph[m][i];
            if(!visited[item]){
                q.push(item);
                visited[item] = true;
            }
        }
    }
}