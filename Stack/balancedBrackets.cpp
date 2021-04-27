#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
     int l  = s.length();
        stack<char> st;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
                st.push(s[i]);
            else if(!st.empty() && ( (s[i]=='}' && st.top()=='{') ||(s[i]==']' && st.top()=='[') || (s[i]==')' && st.top()=='(')))
                st.pop();
            else if(s[i]==')' || s[i]=='}' || s[i]=='}')
                return false;
        }
        if(st.empty())
            return true;
        return false;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    getline(cin,s);
    // cout<<isValid(s)?"true":"false"<<endl;
    if(isValid(s))
        cout<<"true";
    else
        cout<<"false";
    return 0;
}