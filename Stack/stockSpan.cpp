#include<bits/stdc++.h>
using namespace std;
int* stockSpan(int *a,int n)
{
    static int res[5];
    stack<int> st;
    st.push(0);
    res[0] = 1;
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && a[i]>a[st.top()])
        {
            st.pop();
        }
        if(st.size()==0)
            res[i] = i+1;
        else
            res[i] = i-st.top();
        st.push(i);
    }
    
    return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;
    int a[10];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int* res = stockSpan(a,n);
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
    return 0;
}