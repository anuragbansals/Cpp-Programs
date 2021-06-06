#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
            s[i] = s[i] + 32;
        else
            s[i] = s[i] - 32;
    }        
    cout<<s;
}