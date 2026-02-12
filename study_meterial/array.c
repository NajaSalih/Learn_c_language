// types of arrays
//one dimansional array
// two diamansional array


// define method

//ex: int array[array size];
//float name[array size];

//example 

#include<stdio.h>

void main()
{
    char num[15];
    int i;
    printf("input numbers:\n");
    for(i=0;i<10;i++)
    {
         scanf("%d",&num[i]);

    }
    printf("all negative num are:\n");
    for(i=0;i<10;i++)
    {
         if (num[i]<0)
         {
              printf("%d",num[i]);

         }

    }









}
