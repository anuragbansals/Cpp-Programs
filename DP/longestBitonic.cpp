#include<bits/stdc++.h>
using namespace std;
int LongestBitonicSequence(vector<int>nums)
	{
	    int n = nums.size();
	    int dp[2][n];
	    dp[0][0] = 1;
	    dp[1][n-1] = 1;
	    for(int i=1;i<n;i++)
	    {
	        int maxx = 0;
	        for(int j=0;j<i;j++)
	        {
	            if(nums[i]>nums[j] && dp[0][j]>maxx)
	                maxx = dp[0][j];
	        }
	        dp[0][i] = maxx + 1;
            // cout<<dp[0][i]<<endl;
	    }
	    for(int i=n-2;i>=0;i--)
	    {
	        int maxx = 0;
	        for(int j=n-1;j>i;j--)
	        {
	            if(nums[i]>nums[j] && dp[1][j]>maxx)
	                maxx = dp[1][j];
	        }
	        dp[1][i] = maxx + 1;
	    }
	    int maxx = INT_MIN;
	    for(int i=0;i<n;i++)
	        maxx = max(dp[0][i]+dp[1][i],maxx);
        // for(int i=0;i<n;i++)
        //     cout<<dp[0][i]<<endl;
	   return maxx-1;
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
    cout<<LongestBitonicSequence(v)<<endl;
}