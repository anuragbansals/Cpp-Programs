#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int,vector<int> > map;
    void addEdge(int x, int y)
    {
        map[x].push_back(y);
        map[y].push_back(x);
    }
    void bfs(int src)
    {
        unordered_map<int, bool> visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while(!q.empty())
        {
            int k = q.front();
            q.pop();
            cout<<k<<"->";
            vector<int> :: iterator it;
            for(auto nbr: map[k])
            {
                if(!visited[nbr])
                    q.push(nbr);
                visited[nbr] = true;
            }
        }
    }
};



int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    graph g;
    g.addEdge(1,2);
    g.addEdge(1,3);
    g.addEdge(1,4);
    g.addEdge(2,3);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(5,6);
    g.addEdge(5,7);
    g.addEdge(5,3);
    g.bfs(1);
    return 0;
}