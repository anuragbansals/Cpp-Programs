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
    float n;
    cin>>n;
    int total = ceil(n/9),first , num = n;
    if(num%9==0)
        first = 9;
    else
        first = num%9;
    while((total-1))
    {
        first = first*10  + 9;
        total--;
    }
    cout<<first;
    
}