#include<bits/stdc++.h>
using namespace std;
void check(int *arr,int n,int k)
{
    deque<int> dq;
    vector<int> res;
    for(int i=0;i<k;i++)
    {
        if(arr[i]<0)
            dq.push_back(i);
    }
    int temp;
    for(int i = k;i<=n; i++)
    {
        if(!dq.empty())
        {
            temp = dq.front();
            res.push_back(arr[temp]);
        }
        else
            res.push_back(0);
        if(!(dq.empty()) && !(i-dq.front()<k))
            dq.pop_front();
        if(arr[i]<0 && i!=n)
            dq.push_back(i);   
    }
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>k;
    check(arr,n,k);
}