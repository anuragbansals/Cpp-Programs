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
void buildString(string s1,string &res)
{
    res+=" ";
    int l = s1.length();
        for(int j=0;j<l;j++)
        {
            if(isupper(s1[j]))
            {
                if(s1[j]+l>90)
                    s1[j] = 'Z';
                else
                    s1[j] = s1[j]+l;
            }
            else
            {
                if(s1[j]+l>122)
                    s1[j] = 'z';
                else
                    s1[j] = s1[j]+l;
            }   
        }
        res+=s1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1,res="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            s1+=s[i];
        }
        else
        {
            buildString(s1,res);
            s1.clear();
        }
        if(i==s.length()-1)
            buildString(s1,res);
    }
    cout<<res;
    
}