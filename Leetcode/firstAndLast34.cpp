#include<bits/stdc++.h>
using namespace std;
 int binarySearch(vector<int> &nums,int target,int x)
    {
        int left = 0, right = nums.size()-1;
        int k=-1;
        while(left<=right)
        {
            int mid = (left+right)/2;
            if(nums[mid]==target)
            {
                k = mid;
                if(x==0)
                    left = mid + 1;
                else
                    right = mid - 1;
            }
            else if(nums[mid]<target)
                left = mid + 1;
            else
                right = mid - 1;    
        }
        return k;    
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int rightPos = binarySearch(nums,target,0);
        int leftPos = binarySearch(nums,target,1);
        return {leftPos,rightPos};
        
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,target;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cin>>target;
    vector<int> res = searchRange(v,target);
    for(int i=0;i<2;i++)
        cout<<res[i]<<" ";
}