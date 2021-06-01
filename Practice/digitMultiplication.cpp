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
    int n;
    cin>>n;
    int a[9], j=0;
    for(int i=2;i<=9;i++)
    {
        if(n%i==0)
            a[j++] = i;
    }
    int i=0,j=j-1,res,f=0;
    while(i<j)
    {
        if(a[i]*a[j]==n)
        {
            res = a[i]*10+ a[j];
            f = 1;
            break;
        }
        else if(a[i]*a[j]<n)
            i++;
        else
            j--;
    }
    i=0,i1=1,j=a.sized()-1;
    if(f==0)
    {
        while(i<j)
    }
}