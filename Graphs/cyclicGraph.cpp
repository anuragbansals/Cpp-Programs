#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int> > map;
    void addEdge(int v1,int v2)
    {
        
        map[v1].push_back(v2);
        // map[v1].push_back(wt);
    }
    bool isCyclic(int vt, vector<int> &visited)
    {
        queue<int> q;
        q.push(vt);
        
        visited[vt] = 1;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(auto nbr: map[node])
            {
                if(visited[nbr]==1)
                {
                    cout<<node<<"->"<<nbr<<endl;
                    return true;
                }
                    
                q.push(nbr);
                visited[nbr] = true;
            }
        }
        return false;
    }
};

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    graph ob;
    int vt;
    cin>>vt;
    ob.addEdge(1,2);
    ob.addEdge(1,3);
    ob.addEdge(1,5);
    ob.addEdge(5,3);
    ob.addEdge(5,6);
    ob.addEdge(2,4);
    // addEdge(1,2);
    vector<int> visited(vt,0);
        for(int i=0;i<vt;i++)
        {
            if(visited[i]==0)
            {
                bool cycle = ob.isCyclic(i,visited);
                if(cycle){
                    cout<<"Yes"<<endl;
                    exit(0);
                }
                    
            }
        }
        cout<<"No";
    
}