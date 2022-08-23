// Write a program which take the month number as input and display the number of days in that month.
#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("\nEnter a month number");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Number of days in entered month is 31\n");
            break;
            case 2:
            printf("If year is leap then number of the days are 29 otherwise 28\n");
            break;
            case 3:
            printf("Number of days in entered month is 31\n");
            break;
            case 4:
            printf("Number of days in entered month is 30\n");
            break;
            case 5:
            printf("Number of the days in entered month is 31\n");
            break;
            case 6:
            printf("Number of days in entered month is 30\n");
            break;
            case 7:
            printf("Number of days in entered month is 31\n");
            break;
            case 8:
            printf("Number of days in entered month is 31\n");
            break;
            case 9:
            printf("Number of days in entered month is 30\n");
            break;
            case 10:
            printf("Number of days in entered month is 31\n");
            break;
            case 11:
            printf("Number of the days in entered month is 30\n");
            break;
            case 12:
            printf("Number of the days in entered month is 31\n");
            break;
            default:
            printf("Entered choice is invalid");
        }
        if(n>13)
        {
            break;
        }
    }
    return 0;
}