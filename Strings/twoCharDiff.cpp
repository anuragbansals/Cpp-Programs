#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,res;
    cin>>s;
    res = s[0];
    int diff;
    for(int i=1;i<s.length();i++)
    {
        diff = s[i]-s[i-1];
        res+=to_string(diff);
        res+=s[i]; 
    }        
    cout<<res;
}