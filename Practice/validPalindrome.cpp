#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        unordered_map<char, int> map;
        if(s.length()!=t.length())
            return false;
        for(int i=0;i<s.length();i++)
            map[s[i]]++;
        for(int i=0;i<t.length();i++)
        {
            if(map.find(t[i])!=map.end())
            {
                map[t[i]]--;
                if(map[t[i]]==0)
                    map.erase(t[i]);
            }
            else
                return false;
        }
        return map.size()==0;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,t;
    cin>>s>>t;
    if(isAnagram(s,t))
        cout<<"true";
    else
        cout<<"false";
}