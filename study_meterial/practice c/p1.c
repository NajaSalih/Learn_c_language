#include<stdio.h>
void  main()
{
   //Write a program to read a string “Word Processing” in two parts from the keyboard and display the
    //same in the following formats:

    char name1[10];
    char name2[15];
    printf("input name1\n");
    scanf("%s",name1);
    printf("input name2\n");
    scanf ("%s",name2);

    printf("%s%s\n",name1,name2);
    printf("%s\n%s\n",name1,name2);
    printf("%.1s.%.1s",name1,name2);




