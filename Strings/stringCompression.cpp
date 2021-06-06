/*
1. You are given a string. 
2. You have to compress the given string in the following two ways - 
   First compression -> The string should be compressed such that consecutive duplicates of characters are replaced with a single character.
   For "aaabbccdee", the compressed string will be "abcde".
   Second compression -> The string should be compressed such that consecutive duplicates of characters are replaced with the character and followed by the number of consecutive duplicates.
   For "aaabbccdee", the compressed string will be "a3b2c2de2".
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,res1,res2;
    cin>>s;
    res1 = s[0];
    for(int i=1;i<s.length();i++)
    {
        if(s[i]!=s[i-1])
            res1+=s[i];
    }
    res2 = s[0]; int count = 1;
    // s+='#';
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
            count++;
        else
        {
            string c = to_string(count);
            if(count!=1)
                res2+=c;
            res2+=s[i];
            count = 1;
        }
        
    }
    if(count!=1)
        res2+=to_string(count);
    cout<<res1<<endl<<res2;
    
}