#include <iostream>
using namespace std;
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
            cin >> arr[i];
        int f = 0;
        for (int k = n - 1; k > 1; k--)
        {
            int i = 0, j = k - 1;
            while (i < j)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    cout << i + 1 << "," << j + 1 << "," << k + 1 << endl;
                    f = 1;
                    break;
                }
                if (arr[i] + arr[j] < arr[k])
                    i++;
                else
                    j--;
            }
            if (f == 1)
                break;
        }
        if (f == 0)
        {
            cout << "No sequence found" << endl;
        }
    }
}
