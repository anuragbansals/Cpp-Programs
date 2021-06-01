#include<stdio.h>
int binarySearch(int a[],int n,int target)
{
    int left = 0, right = n-1,c=0;
    while(left<=right){
        c++;
        int mid = left + (right-left)/2;
        if(a[mid]==target){
            printf("Total comparisons: %d\n",c);
            return 1;
        }
        if(a[mid]>target)
            right = mid-1;
        else if(a[mid]<target)
            left = mid  +1;
    }
    c++;
    printf("Total comparisons: %d\n",c);
    return 0;
}
void main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        int target;
        scanf("%d",&target);
        if(binarySearch(a,n,target))
            printf("Element is present\n");
        else
            printf("Element is not present\n");
    }
    
}