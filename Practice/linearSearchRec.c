#include<stdio.h>
void linearSearch(int a[],int n,int num,int l)
{
    if(n<0)
    {
        printf("Not Present\n");
        printf("Comaprisons are: %d",l);
    }
    else
    {
        if(a[n]==num)
        {
            printf("Present\n");
            printf("Comparisons are: %d\n",n+1);
        }
        else
            linearSearch(a,n-1,num,l);
    }
    return ;
}
void main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,num;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        scanf("%d",&num);
        linearSearch(a,n-1,num,n);
    }
}