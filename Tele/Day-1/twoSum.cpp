#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int key;
    cin>>key;
    unordered_map<int,bool> map;
    for(int i=0;i<n;i++)
    {
        if(map[key - a[i]])
        {
            map[a[i]] = false;
            cout<<"YES"<<endl;
        }
        else
            map[a[i]] = true;
    }
    return 0;
}