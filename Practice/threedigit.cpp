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
int calculate(int prod,int y,int k,int x)
{
    int c = 3,res = 1,f=0;
    for(int i=k,y=y-1;c>0;i--)
    {
        res = res * k; c--;
        if(x==0)
        {
            res = res*(y); y--;
            c--;
        }
        else
        {
            res = res*i;
            c--;    
        }
        if(res>=prod && res%prod==0 && f!=1)
        {
            res = res/prod;
            f = 1;
        } 
    }
    if(f==0)
        res = res/prod;
    return res;
}
int fact(int n)
{
    int f=1;
    for(int i=n;i>0;i--)
        f = f*i;
    return f;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1;
    cin>>s;
    int hash[10] = {0};
    int l = s.length(),result;
    for(int i=0;i<l;i++)
        hash[s[i]-'0']++;
    int prod = 1;
    for(int i=0;i<10;i++)
    {
        if(hash[i]>1)
            prod = prod * fact(hash[i]);
    }
    if(hash[0]>0)
        result = calculate(prod,l,l-hash[0],0);
    else
        result = calculate(prod,l,l,1);
    int x = 3,i=9;
    while(x>0)
    {
        if(hash[i]>0)
        {
            s1+=to_string(i);
            hash[i]--;
            x--;
        }
        else
            i--;
    }
    cout<<s1<<", "<<result;
}