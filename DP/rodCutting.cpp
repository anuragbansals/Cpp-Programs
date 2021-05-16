#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int temp[n+1];
    temp[0] = 0;
    for(int i=0;i<n;i++)
        temp[i+1] = a[i];
    int dp[n+1];
    dp[0] = 0; dp[1] = temp[1];
    int maxx = INT_MIN;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<i;j++)
            maxx = max(maxx,dp[j]+temp[i-j]);
        maxx = max(maxx, temp[i]);
        dp[i] = maxx;
    }
    for(int i=0;i<=n;i++)
        cout<<dp[i]<<" ";
    cout<<endl<<dp[n];
}  