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

    int start_node = 0;
    int visited[n];
    for(int i=0; i<n; i++){
        visited[i]= -1;
    }
    queue<int>q;
    int label = 0;
    visited[start_node] = 0;
    q.push(start_node);

    while(!q.empty()){
        int m=q.front();
        cout<<m<<" ";
        q.pop();

        bool flag = false;
        for(int i; i<graph[m].size(); i++){
            int item = graph[m][i];
            if(visited[item]==-1){
                if(!flag){
                label++;
                }
                q.push(item);
                visited[item] = label;
            }
            
        }
    }
    cout<<"the cost are: ";
    for(int i = 0; i<n; i++){
        cout<<visited[i]<<" ";
    }


}
