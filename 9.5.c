/* Conver if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");*/
#include<stdio.h>
int main()
{
    int n;
    printf("1.Good\n");
    printf("2.Better\n");
    printf("3.Best\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        printf("Good\n");
        break;
        case 2:
        printf("Better\n");
        break;
        case 3:
        printf("Best\n");
        break;
        default :
        printf("Invalid choice");
    }
    return 0;
}