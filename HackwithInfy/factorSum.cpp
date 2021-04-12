#include<bits/stdc++.h>
using namespace std;
bool check(int n)
{
    int sum = 0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            sum = sum + i + n/i;
    }
    sum++;
    return sum==n;
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
        if(check(n))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}