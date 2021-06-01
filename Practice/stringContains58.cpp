/*Input:
A string of comma separated numbers,
the numbers 5 and 8 are present in the
List. (8 always comes after 5)
Problem:
Num1: Add all numbers which do not lie
between 5 and 8 (excluding 5,8)
Num2: Number formed by concatenating
all numbers from 5 to 8 (Including 5,8)
Output: Num1 + Num2
Case 1:
Input = 3,2,6,5,1,4,8,9
Output = 5168
(Num1 = 3+2+6+9 = 20
Num2 = '5'+'1'+'4'+'8' = 5148
Output = 5148 + 20 = 5168)
Case 2:
Input = 3,1,5,8
Output = 62*/

#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
#include<climits>
#include<vector>
#include<stack>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,s1,s2;
    cin>>s;
    int i = 0, l = s.length(),sum = 0, f= 0,sum1=0 ;
    while(i<l)
    {
        if(f==0 && s[i]!='5' && s[i]!=',')
            sum+= (s[i]-'0');
        else if((s[i]=='5' || f==1 ) && s[i]!=',' && s[i]!='8')
        {
            sum1 = sum1*10 + (s[i]-'0');
            f = 1;
        }
        else if(s[i]=='8' && s[i]!=',')
        {
            sum1 = sum1*10 + (s[i]-'0');
            f = 0;
        }
        i++;
    }
    cout<<sum+sum1<<endl;
}