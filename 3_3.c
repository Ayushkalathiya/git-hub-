//THIS PROGRAM IS CREATED BY 22TCE146
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\na : %d",a);
    printf("\nb : %d",b);
    return 0;
}
