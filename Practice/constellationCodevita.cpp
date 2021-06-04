#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    char a[3][n];
    string ans;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    for(int i=0;i<n;i++)
    {
        if(a[0][i]=='#' && a[1][i]=='#' && a[2][i]=='#')
            ans+='#';
        else
        {
            char x1 = a[0][i], x2=a[0][i+1], x3 = a[0][i+2];
            char x4 = a[1][i], x5 =  a[1][i+1], x6 = a[1][i+2];
            char x7 = a[2][i], x8 =  a[2][i+1], x9 = a[2][i+2];
            if(x1=='.' && x2=='*' && x3=='.' && x4=='*' && x5=='*' && x6=='*' && x7=='*' && x8=='.' && x9=='*')
                ans+='A';
            else if(x1=='*' && x2=='*' && x3=='*' && x4=='*' && x5=='*' && x6=='*' && x7=='*' && x8=='*' && x9=='*')
                ans+='E';
            else if(x1=='*' && x2=='*' && x3=='*' && x4=='.' && x5=='*' && x6=='.' && x7=='*' && x8=='*' && x9=='*')
                ans+='I';
            else if(x1=='*' && x2=='*' && x3=='*' && x4=='*' && x5=='.' && x6=='*' && x7=='*' && x8=='*' && x9=='*')
                ans+='O';
            else if(x1=='*' && x2=='.' && x3=='*' && x4=='*' && x5=='.' && x6=='*' && x7=='*' && x8=='*' && x9=='*')
                ans+='U';
            i=i+2;
        }
    }
    cout<<ans<<endl;
    
}