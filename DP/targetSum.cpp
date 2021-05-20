#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    bool res[n+1][k+1];
    for(int i=0;i<=n;i++)
        res[i][0] = true;
    for(int i=1;i<=k;i++)
        res[0][i] = false;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(res[i-1][j] || (j>=a[i-1] && res[i-1][j-a[i-1]]))
                res[i][j] = true;
            else
                res[i][j] = false;
        }
    }
    if(res[n][k])
        cout<<"true";
    else
        cout<<"false";
}