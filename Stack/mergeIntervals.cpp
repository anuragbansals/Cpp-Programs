#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> merge(vector<vector<int>>& v) {
        stack<pair<int,int> > st;
        vector<vector<int> > vec;
        if(v.size()==1)
            return v;
        sort(begin(v),end(v));
        for(int i=0;i<v.size();i++)
        {
            if(st.empty())
                st.push(make_pair(v[i][0],v[i][1]));
            else if(v[i][0]<=st.top().second && v[i][1]>st.top().second)
                st.top().second = v[i][1];
            else if(v[i][0]>st.top().second)
            {
                vec.push_back({st.top().first,st.top().second});
                st.pop();
                st.push(make_pair(v[i][0],v[i][1]));
            }
        }
        if(!st.empty())
            vec.push_back({st.top().first,st.top().second});
        return vec;
    }
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin>>n;
    vector<vector<int> > v(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=1;j++)
            cin>>v[i][j];
    }
    vector<vector<int>> res = merge(v);
    for(auto arr : res)
    {
        cout<<arr[0]<<","<<arr[1]<<endl;
    }
}