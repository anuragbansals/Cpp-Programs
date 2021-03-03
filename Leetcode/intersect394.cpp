#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,bool> m;
        for(int i=0;i<nums1.size();i++)
            m[nums1[i]] = true;
        vector<int> res;
        for(int i=0;i<nums2.size();i++)
        {
            if(m[nums2[i]]==true)
            {
                res.push_back(nums2[i]);
                m[nums2[i]] = false;
            }   
        }
        return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    vector<int> ans = intersection(a,b);
}