#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s1,s2,res;
    cin>>s1>>s2;
    int l1 = s1.length(), l2 = s2.length();
    int i = l1-1, j = l2-1;
    int carry = 0, sum = 0, k;
    while(i>=0 && j>=0)
    {
        sum = carry + (s1[i]-'0') + (s2[j]-'0');
        k = sum%2+'0';
        res+=k;
        carry = sum/2;
        i--; j--;
    }
    if(i<0 && j<0)
    {
        char c = carry+'0';
        res+=c;
    }
    else if(i<0)
    {
        while(j>=0)
        {
            sum = carry + (s2[j]-'0');
            k = sum%2 + '0';
            res+=k;
            carry = sum/2;
            j--;
        }
    }
    else if(j<0)
    {
        while(i>=0)
        {
            sum = carry + (s1[i]-'0');
            k = sum%2 + '0';
            res+=k;
            carry = sum/2;
            i--;
        }
    }
    if(carry==1)
        res+='1';
    reverse(begin(res),end(res));
    cout<<res;
}