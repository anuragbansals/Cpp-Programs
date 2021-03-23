#include<bits/stdc++.h>
using namespace std;
int minElement(int *nums,int n)
    {
        int left = 0, right = n-1;
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            
            if(nums[mid]>nums[n-1])
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
    int binarySearch(int *nums,int left,int right, int target)
    {
        while(left<=right)
        {
            int mid = left + (right-left)/2;
            if(nums[mid]==target)
                return mid;
            else if(target<nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        return -1;
    }
    int search(int  *nums, int target,int n) {
        int left = 0, right = n-1;
        int index = minElement(nums,n);
        int k = binarySearch(nums,0,index-1,target);
        if(k!=-1)
            return k;
        return binarySearch(nums,index,right,target);
        
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,target;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>target;
    cout<<search(a,target,n);
    
}