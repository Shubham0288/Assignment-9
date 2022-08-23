/* Write a menu driven program to with a following option
   a. Addition
   b. Subtraction
   c. Multiplication
   d. Division */


#include<stdio.h>
int main()
{
    int n,x,y;
    while(1)
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multipliction\n");
        printf("4. Division\n");
        printf("5. Exit\n3");
        printf("Enter your choice ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Enter two numbers\n");
            scanf("%d %d",&x,&y);
            printf("Sum of the numbers is %d",x+y);
            printf("\n");
            break;
            case 2:
            printf("Enter two numbers\n");
            scanf("%d %d",&x,&y);
            printf("Substraction of the number is %d",x-y);
            printf("\n");
            break;
            case 3:
            printf("Enter two numbers\n");
            scanf("%d %d",&x,&y);
            printf("Multiplication of the numbers is %d",x*y);
            printf("\n");
            break;
            case 4:
            printf("Enter two numbers\n");
            scanf("%d %d",&x,&y);
            printf("Division of the numbers is %d",x/y);
            printf("\n");
            break;
            default:
            printf("Invalid choice\n");
        }
        if(n==5)
        {
            break;
        }
    }
    return 0;
}