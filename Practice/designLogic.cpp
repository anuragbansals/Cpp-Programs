#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
#include<math.h>
#include<set>
#include<queue>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    queue<int> q;
    for(int i=1;i<=n;i++)
        q.push(i);
    while(q.size()!=1)
    {
        q.pop();
        int x = q.front();
        q.push(x);
        q.pop();
    }
    cout<<q.front();
}