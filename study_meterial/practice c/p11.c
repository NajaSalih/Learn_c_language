#include<stdio.h>

void main()
{
    int age,n,count=0,i;

    printf("enter how many person calculate age:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("input age:\n");
        scanf("%d",&age);
        if(age<50 || age>60)
            continue;
            count=count+1;

    }
    printf("%d",count);









}
