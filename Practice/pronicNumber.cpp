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
    string s,s1;
    cin>>s;
    vector<string> v;
    int sum = 0;
    for(int i=0;i<s.length()-1;i++)
    {
        s1+=s[i];
        sum = s[i]-'0';
        int x = floor(sqrt(sum));
            if(x*(x+1)==sum)
                v.push_back(s1);
        for(int j=i+1;j<s.length();j++)
        {
            s1+=s[j];
            sum = sum*10 + (s[j]-'0');
            int x = floor(sqrt(sum));
            if(x*(x+1)==sum)
                v.push_back(s1);
        }
        s1.clear();
    }
    set<string> sett;
    for(auto st:v)
    {
        if(st!="0" && st[0]!='0')
        {
            sett.insert(st);
        }
    }
    set<string> :: iterator it;

    for(it=sett.begin();it!=sett.end();it++)
        cout<<*it<<", ";
}