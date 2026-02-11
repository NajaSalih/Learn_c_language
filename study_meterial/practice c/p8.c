#include<stdio.h>

void main()
{
    int x,y;
    printf("input x:\n");
    scanf("%d",&x);

    y=(x<0)?1:((x==0)?0:-1);
    printf("%d",y);

    /*using if condition*/
    /*
    if(x<0)
        y=1;
    else if(x==0)
        y=0;
        else
         y=-1;
     printf("%d",y);
    */



}
