/*Program to check whether a year is a leap year or not. Using switch
statement*/
#include<stdio.h>
int main()
{
    int year,l;
    printf("Enter the year\n");
    scanf("%d",&year);
    l=(year%400==0 || (year%100!=0 && year%4==0));
    switch(l)
    {
        case 1:
        printf("Leap year\n");
        break;
        case 0:
        printf("Not leap year\n");
        break;
    }
    return 0;
}