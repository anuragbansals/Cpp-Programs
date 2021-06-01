#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<math.h>
using namespace std;
void reverseright(string s){
    cout<<s<<endl;
    int l= s.length();
    reverse(begin(s)+l-2,begin(s)+l);
    reverse(begin(s),begin(s)+l-2);
    reverse(begin(s),begin(s)+l);
    cout<<s<<endl;
}
void reverseleft(string s){
    cout<<s<<endl;
    int l= s.length();
     reverse(begin(s),begin(s)+2);
    reverse(begin(s)+2,begin(s)+l);
    reverse(begin(s),begin(s)+l);
    cout<<s<<endl;
}

int main ()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s ;
    cin>>s;
    // s+=':';
    string  f = "";
    int sum=0,flag=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!=','){
             if(s[i]==':'){
                 flag=1;
             }
             else if(flag==0){
                 f+=s[i];
             }
             else{
                 sum+=(pow(s[i]-'a',2));
             }
        }
        else {
            if(sum%2==0){reverseright(f);}
            else {reverseleft(f);}
            f="";
            sum=0;
            flag=0;
        }

    }
    // for(int i= st;i<=l;i++){
    //     cout<<s[i];
    // }
}