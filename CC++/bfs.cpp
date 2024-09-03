#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<vector<int>> graph(n);
    for(int i=0; i<k; i++){
        int u, v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        for(int j=0; j<graph[i].size(); j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    //BFS
    cout<<"BFS is: ";
    int start_node = 0;
    bool visited[n];
    for(int i=0; i<n; i++){
        visited[i]= false;
    }
    queue<int>q;
    visited[start_node] = true;
    q.push(start_node);

    while(!q.empty()){
        int m=q.front();
        cout<<m<<" ";
        q.pop();

        for(int i; i<graph[m].size(); i++){
            int item = graph[m][i];
            if(!visited[item]){
                q.push(item);
                visited[item] = true;
            }
        }
    }


}