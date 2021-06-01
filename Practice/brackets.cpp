/*A non empty string instr containing only parenthesis (,),{,},[,]. It returns outstr based on
following-
● instr is properly nested and return 0 (zero).
● instr not properly nested, returns position of element in instr.
● position starts from 1.
Test cases:
input output
{([])}[] 0
([)()] 3
[[()] 6 (n+1 for lat element i.e. 5+1 =6)
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
using namespace std;
int check(string s)
{
    stack<char> st;
    int i = 0,j=0;
    int l = s.length();
    while(i<l)
    {
        if((s[i]=='}' || s[i]==']' || s[i]==')') && st.empty())
            return i+1;
        else if( s[i]=='{' || s[i]=='[' || s[i]=='(')
            st.push(s[i]);
            
        else if(s[i]=='}' && st.top()=='{')
            st.pop();
        else if(s[i]==']' && st.top()=='[')
            st.pop();
        else if(s[i]==')' && st.top()=='(')
            st.pop();
        else
            return i+1;
        i++;
    }
    if(st.empty())
        return 0;
    else
        return i+1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    cout<<check(s)<<endl;
    return 0;
}