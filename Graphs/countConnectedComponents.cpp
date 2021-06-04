// for undirected graph

#include<bits/stdc++.h>
using namespace std;
class graph
{
    unordered_map<int,list<int>> map;
    public:
    void addEdge(int v1,int v2)
    {
        map[v1].push_back(v2);
        map[v2].push_back(v1);
    }
    void dfs_helper(int src,unordered_map<int,bool> &visited)
    {
        visited[src] = true;
        for(auto nbr: map[src])
        {
            if(visited[nbr]!=true)
                dfs_helper(nbr,visited);
        }
    }
    int dfs()
    {
        unordered_map<int,bool> visited;
        for(auto ele: map)
        {
            int node = ele.first;
            visited[node] = false;
        }
        int c = 0;
        for(auto ele: map)
        {
            // cout<<ele.first<<" "<<endl;
            if(visited[ele.first]!=true)
            {
                cout<<ele.first<<endl;
                dfs_helper(ele.first,visited);
                c++;
            }
        }
        return c;
    }

};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    graph ob;
    ob.addEdge(1,2);
    ob.addEdge(2,3);
    ob.addEdge(2,4);
    ob.addEdge(4,5);
    ob.addEdge(6,7);
    // ob.addEdge(1,2);
    int count = ob.dfs();
    cout<<"No. of connected components: "<<count<<endl;
    return 0;
}