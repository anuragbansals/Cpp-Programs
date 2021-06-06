#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int left,int right)
{
    while(left<=right)
    {
        if(s[left]!=s[right])
            return false;
        left++; right--;
    }
    return true;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        for(int j=i;j<s.length();j++)
        {
            if(isPalindrome(s,i,j))
                cout<<s.substr(i,j-i+1)<<endl;
        }
    }
}