#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int k = 1;
    for(int i=2;i<=n;i++)
        k = k*i;
    return k;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin>>s;
    int l = s.length();
    int fac = factorial(l);  
    
    for(int i=0;i<fac;i++)
    {
        string dummy = s;
        int temp = i;
        for(int div=l;div>=1;div--)
        {
            int q = temp/div;
            int rem = temp%div;
            cout<<dummy[rem];
            dummy.erase(begin(dummy)+rem);
            temp = q; 
        }
        cout<<endl;
    }  
}