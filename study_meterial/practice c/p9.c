#include<stdio.h>

//Write a program to read the values for x and n and evaluate the equation y = xn. Do not use
//any library functions

void main()
{
    int x,n,y=1;
    int i;
    printf("input x and y:\n");
    scanf("%d\n%d",&x,&n);
    for(i=0;i<n;i++)
    {
         y=y*x;

    }
    printf("%d",y);








}
