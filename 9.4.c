/* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit */
#include<stdio.h>
int main()
{
    int n,a,b,c;
    while(1)
    {
        printf("1.Isosceles Triangle\n");
        printf("2.Right Angled Triangle\n");
        printf("3.Equilateral Triangle\n");
        printf("4.Exit\n");
        
        printf("Enter your choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("Enter the three sides of the triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b || b==c || a==c)
            {
                printf("Entered sides are of isosceles triangle\n");
            }
            else
            {
                printf("Entered sides are not of isosceles triangle\n");
            }
            break;
            case 2:
            printf("Enter the three sides of the triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a==b*c || b*b==a*c || c*c==a*b)
            {
                printf("Entered sides are of Right angled triangle\n");
            }
            else
            {
                printf("Entered sides are not of right angle triangle\n");
            }
            break;
            case 3:
            printf("Enter the three sides of the triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b && b==c)
            {
                printf("Entered sides are of Equilateral triangle\n");
            }
            else
            {     
                printf("Entered sides are not of equilateral triangle\n");
            }
            break;
            default:
            printf("Ivalid choice");
        }
        if(n==4)
        {
            break;
        }
    }
}