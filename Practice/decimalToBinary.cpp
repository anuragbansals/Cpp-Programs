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
    int n;
    cin>>n;
    vector<int> v;
    while(n)
    {
        if(n%2==0)
        {
            v.push_back(0);
            n/=2;
        }
        else
        {
            v.push_back(1);
            n/=2;
        }
    }
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i];
    
}