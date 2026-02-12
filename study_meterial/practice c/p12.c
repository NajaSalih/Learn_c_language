#include<stdio.h>

#define SIZE 10

void main()
{
    char num[15];
    int i;
    printf("input numbers:\n");
    for(i=0;i<SIZE;i++)
    {
         scanf("%d",&num[i]);

    }
    printf("all negative num are:\n");
    for(i=0;i<SIZE;i++)
    {
         if (num[i]<0)
         {
              printf("%d",num[i]);

         }

    }









}
