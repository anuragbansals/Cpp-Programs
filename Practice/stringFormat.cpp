#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
using namespace std;
void rotateLeft(string &s)
{
    int l = s.length();
    reverse(begin(s)+l-2,end(s));
    reverse(begin(s),end(s)-2);
    reverse(begin(s),end(s));
}
void rotateRight(string &s)
{
    int l = s.length();
    reverse(begin(s),begin(s)+2);
    reverse(begin(s)+2,end(s));
    reverse(begin(s),end(s));
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1,s2;
    cin>>s;

    int i=0,l = s.length(),f=1,sum = 0;
    while(i<l)
    {
        if(s[i]!=':' && f==1)
        {
            s1+=s[i];
            i++;
            // c++;
        }   
        else if(s[i]==':')
        {
            f = 0;
            i++;
        }   
        else
        {
            while(s[i]!='?' && i<l)
            {
                sum += (s[i]-'0')*(s[i]-'0');
                i++;
            }
            if(sum%2==0)
                rotateLeft(s1);
            else
                rotateRight(s1);
            cout<<s1<<endl;
            s1.clear();
            f=1;
            i++;
        }
    }
    
}