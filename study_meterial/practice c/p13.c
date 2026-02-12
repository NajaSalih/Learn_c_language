#include<stdio.h>
// how to find odd or even
void main()
{
    char num[15];
    int i,count1=0,count2=0;
    printf("input numbers:\n");
    for(i=0;i<4;i++)
    {
         scanf("%d",&num[i]);

    }
    printf("odd or even:\n");
    for(i=0;i<4;i++)
    {
         if (num[i]%2==0)
         {
             count1+=1;


         }
         else
         {
             count2+=1;

         }


    } printf("count is even %d\n",count1);
      printf("count is odd %d",count2);










}







