#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int sum = 0;
    for(int i=0;i<n;i++)
    {   
        cin>>v[i];
        sum+=v[i];
    }
    make_heap(begin(v),end(v));
    int maxx,res;
    while(k--)
    {
        maxx = v.front();
        sum-=maxx;
        pop_heap(begin(v),end(v));
        v.pop_back();
        res = maxx/2;
        sum+=res;
        v.push_back(res);
        push_heap(begin(v),end(v));
    }
    cout<<sum<<endl;
}