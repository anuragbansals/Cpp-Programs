#include<bits/stdc++.h>
using namespace std;
vector<string> commonChars(vector<string>& A) {
        int map[26];
        for(int i=0;i<26;i++)
            map[i] = INT_MAX;
        for(auto str:A)
        {
            int temp[26] = {0};
            for(auto c:str)
                temp[c-'a']++;
            for(int i=0;i<26;i++)
                map[i] = min(map[i],temp[i]);
        }
        vector<string> res;
        for(int i=0;i<26;i++)
        {
            while(map[i])
            {
                res.push_back(string(1,i+'a'));
                map[i]--;
            }
        }
        return res;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    vector<string> v;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    vector<string> res = commonChars(v);
    for(int i=0;i<res.size();i++)
        cout<<res[i]<<", ";
    return 0;
    
}