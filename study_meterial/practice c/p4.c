#include<stdio.h>

//Write a program to read a 3-digit number, extract and print the hundreds, tens, and units digits.


void main()
{
    
    int num, hundreds, tense, units;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);       // Example input: 456
    hundreds = num / 100;     // 456 / 100 = 4
    tens = (num / 10) % 10;    // 456 / 10 = 45 % 10 = 5
    units = num % 10;          // 456 % 10 = 6
    printf("Hundreds: %d\n", hundreds);
    printf("Tense: %d\n", tense);
    printf("Units: %d\n", units);
    
    
}
