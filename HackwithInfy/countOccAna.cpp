#include<bits/stdc++.h>
using namespace std;
bool isEqual(int *arr,int *check)
{
    for(int i=0;i<26;i++)
    {
        if(arr[i]!=check[i])
            return false;
    }
    return true;
}
int countOcc(string s1,string s2)
{
    int l1 = s1.length(), l2 = s2.length();
    int arr[26] = {0};
    int check[26] = {0};
    for(int i=0;i<l2;i++)
    {
        arr[s1[i]-'a']++;
        check[s2[i]-'a']++;
    }
    // for(int i=0;i<l2;i++)
    //     cout<<check[i]<<" ";
    int cnt = arr==check?1:0;
    int j = 0;
    for(int i=l2;i<l1;i++)
    {
        arr[s1[j]-'a']--;
        arr[s1[i]-'a']++;
        // cout<<arr[s1[j]-'a']<<","<<arr[s1[i]-'a']<<endl;
        if(isEqual(arr,check))
            cnt++;
        j++;
    }
    return cnt;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s1, s2;
    cin>>s1>>s2;
    cout<<countOcc(s1,s2);
    return 0;
}