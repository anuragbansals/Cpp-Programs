#include<bits/stdc++.h>
using namespace std;
int maxLength(int *a,int n)
{
    unordered_map<int,int> map;
    int maxL = 0, sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
            maxL = i + 1;
        if(map.find(sum)!=map.end())
            maxL = max(maxL, i-map[sum]);
        else
            map[sum] = i;
    }
    return maxL;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<maxLength(a,n)<<endl;
    return 0;
}