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
int anagram(string s,int left,int right)
{
    if(left==right)
        cout<<s<<endl;
    for(int i=left;i<=right;i++)
    {
        swap(s[i],s[left]);
        anagram(s,left+1,right);
        swap(s[i],s[left]);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1;
    cin>>s;
    int l = s.length(),i=0;
    anagram(s,i,l-1);
    
}