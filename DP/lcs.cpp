#include<bits/stdc++.h>
using namespace std;
int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.length(), l2 = text2.length(); 
        int dp[l1+1][l2+1];
        for(int i=0;i<=l1;i++)
            dp[i][0] = 0;
        for(int i=0;i<=l2;i++)
            dp[0][i] = 0;
        for(int i=1;i<=l1;i++)
        {
            for(int j=1;j<=l2;j++)
            {
                if(text1[i-1]==text2[j-1])
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[l1][l2];
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string text1,text2;
    cin>>text1>>text2;
    cout<<longestCommonSubsequence(text1,text2)<<endl;
}