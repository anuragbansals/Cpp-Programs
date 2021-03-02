#include<bits/stdc++.h>
using namespace std;
void heapify(int *arr,int n,int i)
{
    int largest = i;
    int leftChild = 2*i+1;
    int rightChild = 2*i+2;
    if(leftChild<n && arr[largest]<arr[leftChild])
        largest = leftChild;
    if(rightChild<n && arr[largest]<arr[rightChild])
        largest = rightChild;
    if(largest!=i)
    {
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int arr[] = {5,3,2,6,8,4};
    int n = sizeof(arr)/sizeof(int);
    for(int i=n/2;i>=0;i--)
        heapify(arr,n,i);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}