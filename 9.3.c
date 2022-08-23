// Write a program which takes the day number of a week and display the unique greeting message for the day.
#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("1.Monday\n");
        printf("2.Tuesday\n");
        printf("3.Wednesday\n");
        printf("4.Thursday\n");
        printf("4.Friday\n");
        printf("5.Saturday\n");
        printf("7.Sunday\n");
        printf("8.Exit\n");
        printf("Enter your choice \n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Hey , I Love You\n");
            break;
            case 2:
            printf("Hey, Marry with me\n");
            break;
            case 3:
            printf("Hey , You are my Love\n");
            break;
            case 4:
            printf("Hey , You are my Crush\n");
            break;
            case 5:
            printf("Hey , You are my Heartbeat\n");
            break;
            case 6:
            printf("Hey , You are my Queen\n");
            break;
            case 7:
            printf("Hey , You are beauti of my life\n");
            default:
            printf("Invalid choice");

        }
        if(n==8)
        {
            break;
        }
    }
    return 0;
}