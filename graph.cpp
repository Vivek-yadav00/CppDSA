#include <bits/stdc++.h>
using namespace std;

class graph
{
    public:
        unordered_map<int, list<int>> adj;

        void edge(int x, int y, bool d){
            //direction =0 -> undirected
            //direction =1 -> directed
            adj[x].push_back(y);
            if(d==0){
                adj[y].push_back(x);
            }
        }

        void print(){
            for(auto i:adj){
                cout<<i.first<<"->";
                for(auto j:i.second){
                    cout<<j<<",";
                }
                cout<<endl;
            }
        }
            
};

int main()
{
    graph g;
    int n;
    cout<<"Enter the number of nodes: "<<endl;
    cin>>n;

    int m;
    cout<<"Enter the number of edges: "<<endl;
    cin>>m;

    for (int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        g.edge(x,y,0);
    }

    g.print();

    return 0;
}