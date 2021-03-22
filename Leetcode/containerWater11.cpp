#include<bits/stdc++.h>
using namespace std;
int maxArea(int *height,int n) {
        int maxArea = 0, area;
        int left = 0, right = n-1;
        while(left<right)
        {
            area = (right-left)*min(height[right],height[left]);
            maxArea = max(maxArea,area);
            if(height[left]>height[right])
                right--;
            else 
                left++;
        }
        return maxArea;
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
    cout<<maxArea(a,n);
}