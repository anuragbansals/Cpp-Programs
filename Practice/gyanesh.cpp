#include<bits/stdc++.h>
using namespace std;
int findMax(unordered_map<int,int> &map)
{
    int maxx=INT_MIN;
    unordered_map<int,int> :: iterator it;
    for(it=map.begin();it!=map.end();it++)
    {
    if(it->second>0 && it->first>maxx)
    maxx = it->first;
    }
    return maxx;
}
int findMin(unordered_map<int,int> &map)
{                                               
    int minn = INT_MAX;
    unordered_map<int,int> :: iterator it;
    for(it=map.begin();it!=map.end();it++)
    {
    if(it->second>0 && it->first<minn)
    minn = it->first
    }
    return minn;
}
int main()
{
    int n, q;
    cin>>n>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)
        map[a[i]]++;
    int sum;
    while(q--)
    {
        cin>>k;
        int minVal, maxVal;
        sum = 0;
        for(int i=0;i<k;i++)
        {
            minVal = findMin(map);
            maxVal = findMax(map);
            int diff = maxVal - minVal;
            map[minVal]--;
            map[maxVal]--;
            map[diff]++;
        }
        unordered_map<int,int> :: iterator it;
            for(it=map.begin();it!=map.end();it++)
            {
                sum+=it->first*it->second;
            }
        cout<<sum<<endl;
    }
}