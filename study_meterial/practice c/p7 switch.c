#include<stdio.h>

void main()
{
    char snum[20];
    int marks;

    printf("input your student number:\n");
    scanf("%s",&snum);
    printf("input your marks:\n");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case 9:case 8:case 10:printf("%s-honours",snum);
                              break;
        case 6 :case 7:       printf("%s-firstDivision",snum);
                              break;
        case 5:               printf("%s-second division",snum);
                              break;



    }



}




