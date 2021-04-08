#include<bits/stdc++.h>
using namespace std;
bool subsetSum(vector<int> &nums,int sum)
    {
        int n = nums.size();
        bool dp[n+1][sum+1];
        for(int i=0;i<=sum;i++)
            dp[0][i] = false;
        for(int i=0;i<=n;i++)
            dp[i][0] = true;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(nums[i-1]<=j)
                    dp[i][j] = dp[i-1][j] || dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
        if(sum%2!=0)
            return false;
        return subsetSum(nums,sum/2);
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int> v(5);
    for(int i=0;i<5;i++)
        cin>>v[i];
    cout<<canPartition(v);
}