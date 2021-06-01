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
    string s;
    cin>>s;
    unordered_map<char,int> m;
    m['A'] = 1;
    m['B'] = 10;
    m['C'] = 100;
    m['D'] = 1000;
    m['E'] = 10000;
    m['F'] = 100000;
    m['G'] = 1000000;
    int sum = 0;
    for(int i=0;i<s.length();i++)
    {
        if(m.find(s[i])!=m.end())
            sum+=m[s[i]];
        else
            sum+=0;
    }
    cout<<sum<<endl;
}