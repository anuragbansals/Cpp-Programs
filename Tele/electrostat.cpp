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
    string b;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>b;
    // getline(cin,b);
    int pos=0;
    //int neg=0;
    for(int i=0;i<n;i++)
    {
        if(b[i]=='p')
        {
            pos+=a[i];
        }
        else
        {
           pos-=a[i]; /* code */
        }
        
        

    }
    cout<<pos*100<<endl;
    
}