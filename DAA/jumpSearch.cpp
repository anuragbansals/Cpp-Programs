#include <iostream>
#include<algorithm>
#include<math.h> 
using namespace std; 
int jumpSearch(int arr[], int x, int n) 
{ 
    int compa=1,step = sqrt(n),prev = 0; 
    while (arr[min(step, n)-1] < x) 
    { 
        compa++; 
        prev = step; 
        step += sqrt(n); 
        if (prev >= n) return -compa; 
    } 
    while (arr[prev] < x) 
    { 
        prev++; 
        if (prev == min(step, n)) return -compa; 
    } 
    if (arr[prev] == x) return compa; 
    return -compa; 
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int f = jumpSearch(arr, key, n);
        if (f > 0)
        {
            cout << " found" << endl;
            cout << "Number of comparisons:" << f << endl;
        }
        else
        {
            cout << "Not found" << endl;
            cout << "Number of comparisons:" << (-1) * f << endl;
        }
    }
}