#include <iostream>
#include <utility>
#include <stack>
#include <string>
#include<algorithm>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    string s,s1;
    getline(cin, s);
    stack<pair<char, int>> st;
    for (int i = 0; i < s.length(); i++)
    {
        if(!st.empty() && st.top().first == '(' && s[i] == ')')
            st.pop();
        else if ((s[i] != ' ' && (s[i]==')' && st.empty()) || s[i]=='('||s[i]==')'))
            st.push(make_pair(s[i], i));
    }
    for(int i=s.length()-1;i>=0;i--)
    {
        if(!st.empty() && st.top().second==i)
            st.pop();
        else
            s1+=s[i];
    }
    reverse(begin(s1),end(s1));
    cout <<s1;
}