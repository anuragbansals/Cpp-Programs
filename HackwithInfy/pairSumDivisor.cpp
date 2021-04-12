#include<bits/stdc++.h>
using namespace std;
int checkPairs(int *arr,int n,int m)
{
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
        map[arr[i]%m]++;
    int tpairs = 0;
    unordered_map<int,int> :: iterator it;
    int complement;
    for(it=map.begin();it!=map.end();it++)
    {
        complement = m - it->first;
        if(complement == m || 2*complement==m)
            tpairs+=(map[it->first]*(map[it->first]-1))/2;
        else if(map[complement]>0)
        {
            tpairs+= map[it->first]*map[complement];
            map[it->first] = 0;
        }
    }
    return tpairs;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        int arr[100];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>m;
        cout<<checkPairs(arr,n,m)<<endl;
    }
}