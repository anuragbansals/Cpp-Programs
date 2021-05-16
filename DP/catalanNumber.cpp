#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int dp[n+1] ={0};
    dp[0] = 1; dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            dp[i]+=dp[j]*dp[i-j-1];
        }
    }
    for(int i=0;i<=n;i++)
        cout<<dp[i]<<" ";
    cout<<endl<<dp[n];
}  