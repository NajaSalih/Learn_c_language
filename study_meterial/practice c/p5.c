#include<stdio.h>

//calculate ratio

void main()
{
   int a,b,c,d;
   float answ;
   scanf("%d%d%d%d",&a,&b,&c,&d);
   if((c-d)!=0)
   {
       answ=(a+b)/(float)(c-d);
       printf("ratio=%.2f",answ);

   }
   else
   {
       printf("Division by 0");
   }



}
