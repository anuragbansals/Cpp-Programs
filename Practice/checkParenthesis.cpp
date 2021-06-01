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
int parenthesis(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty())
            st.push(s[i]);
        else if(s[i]==')' && st.top()=='(')
            st.pop();
        else
            st.push(s[i]);
    }
    if(st.size()==0)
        return 0;
    if(st.size()%2!=0)
        return -1;
    return st.size()/2;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    cout<<parenthesis(s);
    
}