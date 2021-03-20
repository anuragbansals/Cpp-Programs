#include<bits/stdc++.h>
using namespace std;
int maxProfit(int *prices,int n) {
        int leastNow = INT_MAX, profitToday = 0, maxProfit = 0;
        for(int i=0;i<n;i++)
        {
            if(leastNow>prices[i])
                leastNow = prices[i];
            profitToday = prices[i] - leastNow;
            
            maxProfit = max(maxProfit, profitToday);
        }
        return maxProfit;
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
    cout<<maxProfit(a,n);
    return 0;
    
}