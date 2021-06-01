/*A non-empty string instr containing only alphabets.
Print length of longest prefix in instr which is same as suffix. prefix and suffix should not overlap
in instr.
Print -1 if no prefix exists which is also the suffix without overlap.
Do case sensitive comparison wherever necessary.
position starts from 1.
Test cases:
Input output
xxAbcxxAbcxx 2
Racecar -1
*/

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
    string s;
    cin>>s;
    int i = 0, l = s.length(), j = l/2, f=0, c = 0,k = -1;
    while(j<l)
    {
        if(s[i]==s[j] && i!=k)
        {
            c++; i++; j++;
            f = 1;
            if(c==1)
                k = j-1;
        }
        else
        {
            i = 0;
            if(f==0)
                j++;
            c = 0; f= 0 ;
        }
    }
    if(f==1)
        cout<<c;
    else
        cout<<-1;
}