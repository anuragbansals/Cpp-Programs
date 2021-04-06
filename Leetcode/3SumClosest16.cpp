#include<bits/stdc++.h>
using namespace std;
int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int diff = INT_MAX, res,sum;
        for(int i=0;i<n-2;i++)
        {
            int left = i+1, right = n-1;
            while(left<right)
            {
                sum = nums[i] + nums[left] + nums[right];
                if(sum==target)
                    return target;
                else if(abs(target-sum)<diff)
                {
                    diff = abs(target-sum);
                    res = sum;
                }
                if(sum<target)
                    left++;
                else
                    right--;
            }
        }
        return res;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    cout<<threeSumClosest(v,target);
    return 0;
}