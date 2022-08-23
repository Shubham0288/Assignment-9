//Write a program to convert even number into its upper nearest odd number switch statement.
#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter even number\n");
    scanf("%d",&num);
    if(num%2==0)a=1;
    if(num%2!=0)a=0;
    switch(a)
    {
        case 1:
        printf("Odd number is %d",num++);
        break;
        case 0:
        printf("Invalid choice");
    }
    return 0;
}