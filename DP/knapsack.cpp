#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, W;
    cin >> n >> W;
    int wt[1000], val[1000];
    for (int i = 0; i < n; i++)
        cin >> val[i];
    for (int i = 0; i < n; i++)
        cin >> wt[i];
    int dp[n+1][W+1];
    // memset(dp, -1, sizeof dp);
    for (int i = 0; i <= W; i++)
        dp[0][i] = 0;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int w = 1; w <= W; w++)
        {
            if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else if (wt[i - 1] > w)
                dp[i][w] = dp[i - 1][w];
        }
    }
    cout << dp[n][W];
}