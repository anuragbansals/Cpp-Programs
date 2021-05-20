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
        
    
    int res[n][m];
    res[0][0] = arr[0][0];
    for(int i=1;i<m;i++)
        res[0][i] = arr[0][i] + res[0][i-1];
    for(int i=1;i<n;i++)
        res[i][0] = arr[i][0] + res[i-1][0];
    
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            res[i][j] = min(arr[i][j]+res[i-1][j],arr[i][j]+res[i][j-1]);
        }
    }
    
    cout<<res[n-1][m-1];
}