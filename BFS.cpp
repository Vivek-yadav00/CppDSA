#include <bits/stdc++.h>
using namespace std;

class graph
{
public:
    unordered_map<int, list<int>> adj;

    void edge(int x, int y, bool d)
    {
        // direction =0 -> undirected
        // direction =1 -> directed
        adj[x].push_back(y);
        if (d == 0)
        {
            adj[y].push_back(x);
        }
    }

    void print()
    {
        for (auto i : adj)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << j << ",";
            }
            cout << endl;
        }
    }

    void bfspath(int src)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        q.push(src);
        visited[src] = true;

        while (!q.empty())
        {
            int node = q.front();
            cout << node << " ";
            q.pop();

            for (auto i : adj[node])
            {
                if (!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }
};

int main()
{
    graph g;
    int n;
    cout << "Enter the number of nodes: " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of edges: " << endl;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        g.edge(x, y, 0);
    }

    g.print();
    cout << "entr the source node: " << endl;
    int src;
    cin >> src;
    g.bfspath(src);

    return 0;
}