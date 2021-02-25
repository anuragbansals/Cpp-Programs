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
    float fact = 1,sum=0;
    for(float i=1;i<=n;i++)
    {
        fact = fact*i;
        sum = sum + i/fact;
    }
    printf("%.6f",sum);
}