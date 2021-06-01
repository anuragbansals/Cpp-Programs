#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<map>
using namespace std;
vector<vector<string > > anagram(vector<string> v)
{
    map< map<char,int>,int> m;
    
    vector<vector<string>> v1(v.size());
    int j = 0, c= 0;
    for(auto str:v)
    {
        map<char,int> m1;
        for(int i=0;i<str.length();i++)
            m1[str[i]]++;
        // unordered_map<char,int> :: iterator it;
        auto it = m.find(m1);
        if(it!=m.end())
        {
            int x = m[m1];
            v1[x].push_back(str);
        }
        else
        {
            m.insert({m1,c});
            v1[c].push_back(str);
            c++;
        }
        
    }
    // cout<<3;
    return v1;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    // cout<<5;
    vector<string> v;
    string s;
    for(int i=0;i<n;i++)
    {
        v.push_back(s);
    }
    cout<<v.size();
    cout<<v[0];
    vector<vector<string> > vec = anagram(v);
    cout<<endl;
    for(int i=0;i<vec.size();i++)
    {
        for(string str:vec[i])
            cout<<str<<" ";
    }
}