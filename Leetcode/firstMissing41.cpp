#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(int *nums,int n) {
        unordered_map<int,bool> map;
        // int n = nums.size();
        if(n==0)
            return 1;
        for(int i=0;i<n;i++)
            map[nums[i]] = true;
        int i;
        for(i=1;i<=n;i++)
        {
            if(map.find(i)==map.end())
                return i;
        }
        return i;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<firstMissingPositive(a,n);

}