#include<bits/stdc++.h>
using namespace std;
// void rowReverse()
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            swap(arr[i][j],arr[j][i]);
    }
    for(int i=0;i<n;i++)
    {
        // rowReverse(arr);
        for(int j=0;j<n/2;j++)
            swap(arr[i][j],arr[i][n-j-1]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
    }
}