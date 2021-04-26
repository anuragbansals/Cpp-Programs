#include<bits/stdc++.h>
using namespace std;
void topologialSortUtils(vector<int> graph[], bool visited[], stack<int> &st, int i)
{
    visited[i] = true;
    int n = graph[i].size();
    for(int j=0;j<n;j++)
    {
        if(!visited[graph[i][j]])
            topologialSortUtils(graph,visited,st,graph[i][j]);
    }
    st.push(i);
}
void topologicalSort(vector<int> graph[], int V)
{
    bool visited[V];
    stack<int> st;
    for(int i=0;i<V;i++)
    {
        if(!visited[i])
            topologialSortUtils(graph,visited,st,i);
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int V, E, s, d;
    cin>>V>>E;
    vector<int> graph[V];
    for(int i=0;i<E;i++)
    {
        cin>>s>>d;
        graph[s].push_back(d);
    }
    topologicalSort(graph, V);

    return 0;
}