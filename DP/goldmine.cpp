#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    int res[n][m], k;
    for(int i=0;i<n;i++)
        res[i][m-1] = arr[i][m-1];
    for(int j=m-2;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            k = arr[i][j];
            if(i==0)
                res[i][j] = max(k+res[i][j+1],k+res[i+1][j+1]);
            else if(i==n-1)
                res[i][j] = max(k+res[i][j+1],k+res[i-1][j+1]);
            else
                res[i][j] = max(k+res[i-1][j+1], max(k + res[i][j+1], k + res[i+1][j+1] ));
        }
    }
    int ans = INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=0;j<m;j++)
    //         cout<<res[i][j]<<" ";
    //     cout<<endl;
    // }
    for(int i=0;i<n;i++)
        ans = max(ans,res[i][0]);
    cout<<endl<<ans;
}