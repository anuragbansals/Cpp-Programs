#include<bits/stdc++.h>
using namespace std;
int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
            map[nums[i]]++;
        int sum = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(map[nums[i]]==1)
                sum+=nums[i];
        }
        return sum;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<sumOfUnique(v)<<endl;
    
}