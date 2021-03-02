#include <bits/stdc++.h>
using namespace std;
void printPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];
        if (s.find(temp) != s.end())
        {
            cout << arr[i] << "," << temp << endl;
            return;
        }
        s.insert(arr[i]);
    }
    cout << "No Such Elements Exist" << endl;
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
        int sum;
        cin >> sum;
        printPairs(arr, n, sum);
    }
    return 0;
}