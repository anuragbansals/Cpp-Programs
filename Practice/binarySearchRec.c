#include<stdio.h>
int c = 0;
int binarySearch(int a[],int target,int left,int right){
    if(left<=right){
        c++;
        int mid = left + (right-left)/2;
        if(a[mid]==target){
            printf("Total comparisons: %d\n",c);
            return 1;
        }
        else if(a[mid]>target)
            return binarySearch(a,target,left,mid-1);
        else
            return binarySearch(a,target,mid+1,right);
    }
    else{
        c++;
        printf("Total comparisons: %d\n",c);
    }
        return 0;
    
}
void main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,target;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&target);
        int left = 0, right = n-1;
        c=0;
        if(binarySearch(a,target,left,right))
            printf("Element is present\n");
        else
            printf("Element is not present\n");
    }
}