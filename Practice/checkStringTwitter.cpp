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
    int t;
    cin>>t;
    string str1,str2;
    string str = to_string(t);
    str1 = str.front();
    cout<<str1<<endl;
    str2 = str.back();
    cout<<str2<<endl;
    int a,b;
    a = stoi(str1);
    b = stoi(str2);
    int c = a + b;
    cout<<c;
    
}