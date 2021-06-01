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
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    cin>>n;
    int a[n];
    vector<int> v;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int i = n-1, j = m-1, k = 0;
    while(j>=0 || i>=0)
    {
        if(i>=0 && j>=0)
        {
            if(a[i]>b[j])
                v.push_back(a[i]-b[i]);
            else
            {
                v.push_back(10 + a[i] - b[i]);
                a[i-1] = a[i-1] - 1; 
            }
            i--; j--; 
        }
        else if(j<0)
        {
            v.push_back(a[i]);
            i--;
        }
    }
    reverse(begin(v),end(v));
    for(auto ele:v)
        cout<<ele<<" ";
    
    
}