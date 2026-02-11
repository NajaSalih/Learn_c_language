#include<stdio.h>

void main()
{
    char snum[20];
    int marks;

    printf("input your student number:\n");
    scanf("%s",&snum);
    printf("input your marks:\n");
    scanf("%d",&marks);
    if (marks>=80)
         printf("%s-Honours",snum);
         else
            if(marks>=60)
              printf("%s-First Division",snum);
            else if (magrks>=50)
               printf("%s-second Division",snum);
            else if(marks>=40)
               printf("%s-third Division",snum);
            else
                printf("%s-Fail",snum);
}




