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
    string s,temp,word,result;
    getline(cin,s);
    cin>>word;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
            temp+=s[i];
        else
        {
            if(temp!="" && temp!=word)
                result+=temp+' ';
            temp.clear();
        }
    }
    if(temp!="" && temp!=word)
        result+=temp+' ';
    result.pop_back();
    cout<<result<<" "<<result.length();
}