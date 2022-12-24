//This Program is Created by 22TCE146
#include<stdio.h>
#include<conio.h>
int main()
{
    int amount;
    printf("\nEnter amount : ");
    scanf("%d",&amount);
    printf("\nRequirements of 100 Rs.note : %d",amount / 100);
    amount = amount%100;
    printf("\nRequirements of 50 Rs.note  : %d",amount/50);
    amount = amount%50;
    printf("\nRequirements of 10 Rs.note  :%d",amount/10);




    return 0;
}
