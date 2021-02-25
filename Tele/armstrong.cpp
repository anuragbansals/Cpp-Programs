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
int product(int k,int l)
{
    int prod = 1;
    for(int i=1;i<=l;i++)
        prod = prod*k;
    return prod;
}
bool isArmstrong(int n)
{
    int num = n;
    string s = to_string(n);
    int l = s.length(),sum=0;
    while(n>0)
    {
        int k = n%10;
        n = n/10;
        sum = sum + product(k,l);
        // cout<<sum<<" ";
    }
    if(sum==num)
        return true;
    return false;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int l1,l2,c=0;
    cin>>l1>>l2;
    for(int i=l1;i<=l2;i++)
    {
        if(isArmstrong(i))
            cout<<i<<" ";
    }
    // cout<<c<<endl;
    // if(isArmstrong(555))
    //     cout<<"yes";
    // else
    //     cout<<"No";
}