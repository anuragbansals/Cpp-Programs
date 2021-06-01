#include<stdio.h>
int binarySearch(int a[],int n,int key,int x)
{
    int left = 0, right = n-1, res = -1;
    while(left<=right)
    {
        int mid = left  + (right-left)/2;
        if(a[mid]==key)
        {
            res = mid;
            if(x==1)
                right = mid - 1;
            else
                left = mid + 1;
        }
        else if(key<a[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return res;
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,key;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&key);
        int f = binarySearch(a,n,key,1);
        if(f==-1)
            printf("Key not present\n");
        else
        {
            int l = binarySearch(a,n,key,0);
            int ans = l-f+1;
            printf("%d : %d\n",a[f],ans);
        }
            
    }
}