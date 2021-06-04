#include<bits/stdc++.h>
using namespace std;
int helper(int *a,int n)
{
    vector<int> res(n,1);
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            res[i] = res[i-1]+1;
    }
    for(int i=n-1;i>0;i--)
    {
        if(a[i-1]>a[i])
            res[i-1] = max(res[i-1], res[i]+1);
    }

    int ans = 0;
    for(int i=0;i<n;i++)
        ans+=res[i];
    return ans;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<helper(a,n)<<endl;
    }
}