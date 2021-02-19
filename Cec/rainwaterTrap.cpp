#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int building[n],left[n],right[n];
    for(int i=0;i<n;i++)
        cin>>building[i];
    int curr = 0;
    for(int i=0;i<n;i++)
    {
        if(building[i]>curr)
        {
            curr = building[i];
        }
        left[i] = curr - building[i];
    }
    curr = 0;
    for(int i=n-1;i>=0;i--)
    {
        if(building[i]>curr)
        {
            curr = building[i];
        }
        right[i] = curr - building[i];
    }
    int water = 0;
    for(int i=0;i<n;i++)
    {
        water = water + min(left[i],right[i]);
    }
    cout<<water;
}