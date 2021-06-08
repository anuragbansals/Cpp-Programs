#include <bits/stdc++.h>
using namespace std;
bool isValid(int n,int *temp)
{
    int k;
    while(n>0)
    {
        k = n%10;
        if(temp[k]==0)
            return false;
        n = n/10;
    }
    return true;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,limit;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>limit;
    int temp[10] = {0};
    for(int i=0;i<n;i++)
        temp[arr[i]] = 1;
    int count = 0;
    for(int i=1;i<=limit;i++)
    {
        if(isValid(i,temp))
            count++;
    }
    cout<<count;
}
