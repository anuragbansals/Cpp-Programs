/*A string is given, we have to find the longet substring which is unique(that has no repetation)
and has a minimum size of 3. If more than one substring is found with max length then we have
to print the one which appeared first in the string.If no substring is present which matches the
condition then we have to print ‐1.
input ‐ "A@bcd1abx"
output ‐ "A@bcd1"
Note:
" A@bcd1a" is not a unique substring as it contains "A" and "a" and substring "bcd1a"
does not appear first.
*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1,s2;
    cin>>s;
    int l = s.length();
    unordered_map<char,bool> m,m1;
    for(int i=0;i<l;i++)
        m[s[i]] = true;
    m1 = m;
    int maxx = 0,c=0;
    int i = 0,k = INT_MAX;
    while(i<l)
    {
        k = min(i,k);
        cout<<i<<endl;
        if(m[s[i]]==true && i<l)
        {
            c++;
            s1+=s[i];
            m[s[i]] = false;
            i++;
        }
        else 
        {
            m = m1;
            if(c>maxx)
            {
                maxx = c;
                s2 = s1;
                // cout<<s1<<endl;
            }
            s1.clear();
            i = k+1;
            k = INT_MAX;
            c=  0;
        }
        if(i==l)
            s2 = s1;   
    }
    cout<<s2;
    
}