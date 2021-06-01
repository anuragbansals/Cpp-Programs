#include <bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j, comp = 0, shift = 0;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
            comp++;
            shift++;
        }
        arr[j + 1] = key;
        shift++;
    }
    cout << "comparisons = " << comp << endl;
    cout << "shifts = " << shift << endl;
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
        insertionSort(arr, n);
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}