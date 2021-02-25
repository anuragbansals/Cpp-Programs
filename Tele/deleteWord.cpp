/* Remove the word provided from a given string*/
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
    string s,temp,word;
    getline(cin,s);
    cin>>word;
    vector<string> v;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            temp+=s[i];
        else
        {
            if(temp!="" && temp!=word)
                v.push_back(temp);
            temp.clear();
        }
    }
    if(temp!="" && temp!=word)
        v.push_back(temp);
    temp.clear();
    for(int i=0;i<v.size();i++)
    {
        temp = temp + v[i] +' '; 
    }
    temp.pop_back();
    cout<<temp;
}