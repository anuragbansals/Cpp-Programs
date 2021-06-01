/*Form the Largest Possible Even Number
from the given Alphanumeric String after
removing all duplicate digits.
If No even number can form print -1
Case 1:
Input : Infosys@337
Output : -1
Case 2:
Input : Hello#81@21349
Output : 984312
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    vector<int> v;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(isdigit(s[i]))
            v.push_back(s[i]-'0');
    }
    int f =0,minn = INT_MAX,x;

    for(int i=0;i<v.size();i++)
    {
        if(v[i]%2==0)
        {
            f = 1;
            if(v[i]<minn)
            {
                minn = v[i];
                x = i;
            }
        }   
    }
    if(f==0)
        cout<<-1;
    else
    {
        v[x] = INT_MIN;
        sort(begin(v),end(v),greater<int>());
        v.pop_back();
        v.push_back(minn);
        for(int i=0;i<v.size();i++)
            cout<<v[i];
    }
    
}