#include<bits/stdc++.h>
using namespace std;
int findMin(int *a,int n) {
        int left = 0, right = n-1;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            // if(a[mid]>a[mid+1])
            //     return a[mid+1];
            if(a[mid]>a[n-1])
                left = mid + 1;
            else
                right = mid-1;
        }
        return a[left];
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
    cout<<findMin(a,n);
}