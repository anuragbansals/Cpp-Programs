#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
using namespace std;
vector<int> cal(int a[],int n)
{
    int left=0, right = n-1, i=n-2;
    while(true)
    {
        if(a[left]+a[i]==a[right])
        {
            return {left,i,right};
        }
        else if(a[i]+a[j]<a[right])
        {
            right--;
            i = right-1;
            left = 0;
        }
        else if(a[i]+a[j]>a[right])
        {
            
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<cal(a,n)<<endl;
    }
    
}