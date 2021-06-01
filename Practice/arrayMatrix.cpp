#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int calc(int *a,int i)
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k = sqrt(n);
    vector<int> indices;
    int i = 1;
    while(i<=k)
    {
        indices.push_back(i);
        i++;
    }
    for(auto ele:indices)
    {
        int sum = 0;
        int j = 0;
        while(j<n)
        {
            maxx = max(calc(a,ele),maxx);
        }
        
    }
}