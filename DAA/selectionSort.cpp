#include <iostream> 
using namespace std; 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 
    int t; 
    cin>>t; 
    while(t--)
    { 
        int n ; 
        cin>>n; 
        int arr[n]; 
        for(int i=0;i<n;i++)
        { 
            cin>>arr[i]; 
        } 
        int i, j, min_idx,com=0,swp=0; 
        for (i = 0; i < n-1; i++) 
        { 
            min_idx = i; 
            for (j = i+1; j < n; j++) 
            { 
                if (arr[j] < arr[min_idx]) 
                    min_idx = j; 
                com++; 
            } 
            swap(arr[min_idx],arr[i]); 
            swp++; 
        }
        for (int i : arr)
        {
            cout << i << " ";
        }
        cout << endl;
        cout << "comparisons =" << com << endl;
        cout << "Swap=" << swp << endl;
    }
}