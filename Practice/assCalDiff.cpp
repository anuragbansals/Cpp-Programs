#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;
int function(int a[],int n,int k)
{
    unordered_map<int,int> m;
    int c = 0;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    for(int i=0;i<n;i++)
    {
        if(m.find(k+a[i])!=m.end() && m[k+a[i]]>0)
            c++;
            m[k+a[i]]--;
    }
    return c;   
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cin>>k;
        cout<<function(a,n,k)<<endl;
    }
}