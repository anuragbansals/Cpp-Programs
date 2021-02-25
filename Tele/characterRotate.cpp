#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    getline(cin,s);
    int i =0,count=1;
    int l = s.length();
    while(i<l)
    {
        if(s[i]!=' ')
        {
            if(s[i]+count>'z')
            {
                int x = (s[i]+count)-'z';
                s[i] = 'a'+x-1;
            }
            else
                s[i] = s[i]  + count;
            count++;
        }
        else
            count = 1;
        i++;
    }
    cout<<s;
}