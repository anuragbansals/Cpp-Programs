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
    string s,res;
    cin>>s;
    s+="0";
    int n,c=0;
    cin>>n;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(st.empty() || st.top()==s[i])
        {
            st.push(s[i]);
            c++;
        }
        else if(st.top()!=s[i])
        {
            if(c!=n)
                res+=st.top();
            st.empty();
            st.push(s[i]);
            c = 1;
        }
    }   
    cout<<res;
}