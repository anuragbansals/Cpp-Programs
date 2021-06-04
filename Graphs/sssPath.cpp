#include<bits/stdc++.h>
using namespace std;
class graph
{
    unordered_map<int,list<int>> map;
    public:
    int distance[100001] = {0};
    void addEdge(int v1,int v2)
    {
        map[v1].push_back(v2);
        map[v2].push_back(v1);
    }
    void dfs_helper(int src,int d,unordered_map<int,bool> &visited)
    {
        visited[src] = true;
        distance[src] = d;
        for(auto nbr: map[src])
        {
            if(visited[nbr]!=true)
                dfs_helper(nbr,distance[src]+1,visited);
        }
    }
    void dfs(int n)
    {
        unordered_map<int,bool> visited;
        for(auto ele: map)
        {
            int node = ele.first;
            visited[node] = false;
        }
       
        dfs_helper(1,0,visited);
    }

};
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,a,b;
    cin>>n;
    graph ob;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        ob.addEdge(a,b);
    }
    ob.dfs(n);
    int q, ans = -1, minn = INT_MAX;
    cin>>q;
    while(q--)
    {
        int k;
        cin>>k;
        if(ob.distance[k]<minn)
        {
            minn = ob.distance[k]; ans = k;
        }
        if(ob.distance[k]==minn && k<ans)
            ans = k;
    }
    cout<<ans;
    return 0;
}