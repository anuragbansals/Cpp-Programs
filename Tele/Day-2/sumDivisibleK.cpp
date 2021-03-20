#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,key;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>key;
    int tsum = 0, sum = 0;
    for(int i=0;i<n;i++)
    {
        tsum+=a[i];
        if(tsum<0)
            tsum = 0;
        if(sum<tsum && tsum%key==0)
            sum = tsum;
    }
        cout<<sum;

}