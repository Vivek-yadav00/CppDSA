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

    void dfspath(int src)
    {
        stack<int> q;
        unordered_map<int, bool> visited;
        q.push(src);

        while (!q.empty())
        {
            int node = q.top();
            q.pop();
            if (!visited[node])
            {
                cout << node << " ";
                visited[node] = true;
            }
            for (auto i : adj[node])
            {
                if (!visited[i])
                {
                    q.push(i);
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
    g.dfspath(src);

    return 0;
}