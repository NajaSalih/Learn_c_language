#include<stdio.h>

void main()
{
    int a,b,c,d,max;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a>b)
       if(a>c)
        max=a;
       else
        max=c;
    else
        if(a>c)
         max=b;
        else
         max=c;
    printf("max=%d",max);
}       