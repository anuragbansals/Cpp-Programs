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
int primeSieve(int n)
{
    // cout<<2;
    int dp[1000000] = {0};
    dp[0] = dp[1] = 1;
    for(int i=2;i*i<100000;i++)
    {
        // cout<<1;
        if(dp[i]!=1)
        {
            for(int j=i*i;j<100000;j=j+i)
                dp[j] = 1;
            // cout<<"{"<<dp[i]<<"}";
        }
    }
    int c = 0;
    for(int i=1;i<100000;i++)
    {
        if(dp[i]==0)
        {
            c++;
            if(c==n)
                return i;
        }
    }
    return 0;
}
int main()
{
    // cout<<3;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    // cout<<"x";
    int prime = primeSieve(n);
    cout<<prime;
    // cout<<n;
}