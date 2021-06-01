/*Special string reverse
Input Format: b@rd
Output Format: d@rb
Explanation:
We should reverse the alphabets of the string by keeping the special characters in the
same position*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1;
    cin>>s;
    int i = 0, l = s.length(), c = 0, k ; 
    while(i<l)
    {
        if(s[i]!='@')
            s1+=s[i];
        else
            k = i;
        i++;
    }
    reverse(begin(s1),end(s1));
    s.clear();
    int j = 0;
    for(int i = 0;i<l;i++)
    {
        if(i==k)
            s+='@';
        else
            s+=s1[j++];
    }
    cout<<s;
}