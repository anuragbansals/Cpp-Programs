#include<bits/stdc++.h>
using namespace std;
bool closeStrings(string word1, string word2) {
        int l1 = word1.length(), l2 = word2.length();
        if(l1!=l2)
            return false;
        unordered_map<char,int> m1,m2;
        for(int i=0;i<l1;i++)
            m1[word1[i]]++;
        for(int i=0;i<l2;i++)
            m2[word2[i]]++;
        unordered_map<char,int> :: iterator it,it1;
        for(it=m1.begin();it!=m1.end();it++)
        {
            if(m2.find(it->first)==m2.end())
                return false;
        }
        unordered_map<int,int> temp;
        for(auto it: m1)
            temp[it.second]++;
        for(auto it: m2)
        {
            if(temp.find(it.second)==temp.end())
                return false;
            else
            {
                temp[it.second]--;
                if(temp[it.second]==0)
                    temp.erase(it.second);
            }
            
        }
        return temp.empty();
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s1,s2;
    cin>>s1>>s2;
    cout<<closeStrings(s1,s2);
}