#include<bits/stdc++.h>
using namespace std;
int* nextGreaterElement(int *a,int n)
{
    static int nse[5];
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++)
    {
        while(!st.empty() && a[i]>a[st.top()])
        {
            nse[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while(!st.empty())
    {
        nse[st.top()] = -1;
        st.pop();
    }
    return nse;
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
    int* res = nextGreaterElement(a,n);
    for(int i=0;i<n;i++)
        cout<<res[i]<<" ";
    return 0;
}