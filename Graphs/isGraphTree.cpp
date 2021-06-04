#include<bits/stdc++.h>
using namespace std;
vector<int> visited(100001,false);
void dfs(int src,unordered_map<int,list<int> > &map)
{
    visited[src] = true;
    for(auto nbr: map[src])
    {
        if(visited[nbr]!=true)
            dfs(nbr,map);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    unordered_map<int,list<int> > map;
    int n, m, a, b;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        map[a].push_back(b);
        map[b].push_back(a);
    }
    int count = 0;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]!=true)
        {
            dfs(i,map);
            count++;
        }
    }
    if(count==1 && m==n-1)
        cout<<"Yes";
    else
        cout<<"No";
    
}