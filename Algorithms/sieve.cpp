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
int countPrimes(int n) {
        int arr[10000000] = {0};
        arr[0] = 1;
        arr[1] = 1;
        for(int i=2;i*i<n;i++)
        {
            if(arr[i]!=1)
            {
                for(int j=i*i;j<n;j+=i)
                    arr[j] = 1;
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
                cnt++;
        }
        return cnt;
    }
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n;
    cin>>n;   
    cout<<countPrimes(n)<<endl;
}