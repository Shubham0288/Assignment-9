//Program to convert a positive number into a negative number and negative
//number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
    int num,a,b,new;
    printf("Enter any number\n");
    scanf("%d",&num);
    if(num>0)a=1;
    if(num<0)a=0;
    switch(a)
    {
        case 1:
        new=num*(-1);
        printf("The new number is %d",new);
        break;
        case 0:
        new=num*(-1);
        printf("The new number is %d",new);
        break;
    }
    return 0;
}
