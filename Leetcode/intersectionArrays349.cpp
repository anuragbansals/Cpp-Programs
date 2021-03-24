#include<bits/stdc++.h>
using namespace std;
int* intersection(int *a,int *b,int *res,int n)
{
    int k = 0;
    unordered_map<int,bool> map;
    for(int i=0;i<n;i++)
        map[a[i]] = true;
    for(int i=0;i<n;i++)
    {
        if(map[b[i]]==true)
            res[k++] = b[i];
    }
    return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[100], b[100], res1[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int *res = intersection(a,b,res1,n);
    int k = sizeof(res)/sizeof(int);
    for(int i=0;i<k;i++)
        cout<<res[i]<<" "; 
}