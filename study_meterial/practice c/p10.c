#include<stdio.h>
//Given a number, write a program to reverse the digits of the given number. For example, if
//the number is 1234 the output should be 4321

void main()
{
    int x,y;
    scanf("%d",&x);
    while (x!=0)
    {
        y=x%10;
        x=x/10;
        printf("%d",y);
    }









}
