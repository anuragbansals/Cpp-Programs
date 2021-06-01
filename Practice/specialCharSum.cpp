/*1. If Even Special Character find in inStr,
outStr contains digits from inStr starting
from Even then Odd then even-odd so on.
2. If Odd Special Character find in inStr,
outStr contains digits from inStr starting
from Odd then Even then odd-even so on.
3. If there any numbers (additional) left
append them at last
Case 1 :
inStr = t9@a42g&516
outStr = 492561
Case 2 :
inStr = 5u6@n25g7#@
outStr = 56527*/
#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
using namespace std;
string check(string s1,string s2,int l1,int l2,int x)
{
        string temp;
        int i=0,j=0;
        while(i<l1 || j<l2)
        {
            if(x==0)
            {
                if(i<l1)
                    temp+=s1[i];
                if(j<l2)
                    temp+=s2[i];
            }
            else
            {
                if(i<l2)
                    temp+=s2[i];
                if(j<l1)
                    temp+=s1[i];
            }   
            i++; j++;      
        }
        return temp;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1,s2,s3;
    cin>>s;
    int c = 0;
    for(int i=0;i<s.length();i++)
    {
        if(!isalpha(s[i]) && !isdigit(s[i]))
            c++;
    }
    int i = 0,l = s.length();
        while(i<l)
        {
            if(isdigit(s[i]))
            {
                if((s[i]-'0')%2==0)
                    s1+=s[i];
                else
                    s2+=s[i];
            }
            i++;
        }
    int l1 = s1.length();
    int l2 = s2.length();
    if(c%2==0)
        cout<<check(s1,s2,l1,l2,0);
    else
        cout<<check(s1,s2,l1,l2,1);
}