#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{
    int N, M, K, C;
    cin >> N >> M >> K >> C;

    vector<vector<int>> graph(N + 1);
    for (int i = 0; i < M; ++i)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    // BFS
    vector<int> distance(N + 1, -1); 
    queue<int> q;
    q.push(C);
    distance[C] = 0;
    while (!q.empty())
    {
        int city = q.front();
        q.pop();

        for (int next_city : graph[city])
        {
            if (distance[next_city] == -1)
            { 
                int next_dist = distance[city] + 1;
                if (next_dist <= K)
                { 
                    distance[next_city] = next_dist;
                    q.push(next_city);
                }
            }
        }
    }
    int reachable_cities = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (distance[i] != -1)
        {
            reachable_cities++;
        }
    }
    cout << reachable_cities << endl;

    return 0;
}
