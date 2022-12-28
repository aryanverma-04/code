#include<bits/stdc++.h>
using namespace std;

class graph{
    unordered_map<int, list<int>> mymap;
    vector<int> bfs;
    public:
        void addEdge(int u, int v, bool directed){
            mymap[u].push_back(v);
            if (directed == 0)
            {
                mymap[v].push_back(u);
            }
            
        }
        void printgraph(){
            for(auto i: mymap){
                cout<<endl<<i.first<<"->";
                for(auto j: i.second){
                    cout<<j<<" ";
                }
            }
        }
};
int main(){
    int e;
    // cout<<"Enter the number of Nodes: ";
    // cin>>n;
    cout<<"\n Enter the number of Edges: ";
    cin>>e;
    graph g;
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin>>u>>v;
        g.addEdge(u,v,1);
    }
    g.printgraph();
    
    return 0;
}