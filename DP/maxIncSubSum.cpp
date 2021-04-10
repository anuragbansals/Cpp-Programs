#include<bits/stdc++.h>
using namespace std;
int maxSumIS(int arr[], int n)  
	{  
	    int maxSum = arr[0];
	    int dp[n];
	    dp[0] = arr[0];
	    if(n==1)
	        return arr[0];
	    for(int i=1;i<n;i++)
	    {
	        int maxx = 0;
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j] && dp[j]>maxx)
	                maxx = dp[j];
	        }
	        dp[i] = arr[i] +  maxx; 
	        if(dp[i]>maxSum)
	            maxSum = dp[i];
	    }
	    return maxSum;
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
    cout<<maxSumIS(a,n)<<endl;
}