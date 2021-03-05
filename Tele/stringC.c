#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    // int n,
    // char str[50];
    // // scanf("%d",str);
    // gets(str);
    // printf("%s\n",strrev(str));
    // printf("%s",str);
    int n,l ;  
    char str[50];
    scanf("%s",str);  
    printf("1. find the  length of string\n");
    printf("2. reverse the string\n");
    printf("3. uppercase of the string\n");
    scanf("%d",&n);
    if(n==1){
       l= strlen(str);
       printf("%d",l);
    }
    else if(n==2){
    //   strrev(str);
      printf("%s",strrev(str));
    }
    else if(n==3){
        for (int a = 0;str[a]!='\0'; a++)
           str[a]= toupper(str[a]);

        printf("%s",str);
    }
    else {
        printf("wrong choice");
    } 
}