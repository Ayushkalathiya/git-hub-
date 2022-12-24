//THIS PROGRAM IS CREATED BY 22TCE146

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define pi 3.14
int main()
{

    float Length,Gravity,T;
    printf("\nEnter Length : ");
    scanf("%f",&Length);
    printf("\nEnter Gravity : ");
    scanf("%f",&Gravity);
    T = 2*pi*sqrt(Length/Gravity);
    printf("\nTime Period : %.2f",T);
    printf("\n//THIS PROGRAM IS CREATED BY 22TCE146");



    return 0;
}
