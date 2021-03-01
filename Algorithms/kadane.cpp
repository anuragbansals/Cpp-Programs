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
    int tsum = 0, sum = 0;
    for(int i=0;i<n;i++)
    {
        tsum+=a[i];
        if(tsum<0)
            tsum = 0;
        else if(sum<tsum)
            sum = tsum;
    }
    cout<<sum;
    return 0;
}