#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    // cin>>key;
    int prod = 1, tprod = 1;
    for(int i=0;i<n;i++)
    {
        tprod*=a[i];
        if(prod<tprod)
            prod = tprod;
    }
    cout<<prod;
    return 0;
}