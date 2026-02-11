#include<stdio.h>
//Write a program to read the values of x and y and print the results of the following expressions in one
//line. Do not store the values of the expressions.

void main()
{
    int x ;
    int y;
    printf("input x and y:\n");
    scanf("%d\n%d",&x,&y);
    printf("%d\n",(x+y)+(x-y));
    printf("%d\n",(x+y)/2);
    printf("%d",(x+y)*(x-y));