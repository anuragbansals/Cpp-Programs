#include<stdio.h>
void  main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    printf("Enter number of test cases\n");
    scanf("%d",&t);
    while(t--)
    {
        int n,num;
        printf("Enter number of elements in the array\n ");
        scanf("%d",&n);
        int a[n];
        printf("Input array\n");
        for(int i=0;i<n;i++)
            scanf("%d",&a[i]);
        printf("Input key");
        scanf("%d",&num);

        int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==num)
                break;
        }
        if(i<=n-1)
        {
            printf("Present\n");
            printf("No. of comaprisons : %d",i+1);
        }
        else
        {
            printf("Not Present\n");
            printf("No. of comaprisons : %d",i);
        }
        printf("\n");
    }
}