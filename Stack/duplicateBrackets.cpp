// Pepcoding

#include<bits/stdc++.h>
using namespace std;
bool check(string s)
{
    stack<pair<char,int> > st;
    int l = s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='(')
            st.push(make_pair(s[i],i));
        else if(st.size()>=2 && i<=l-2 && s[i]== ')' && s[i+1]==')' && s[st.top().second-1]=='(')
            return true;
        else if(s[i]==')')
            st.pop();
    }

    return false;   
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    getline(cin,s);
    cout<<check(s);
}