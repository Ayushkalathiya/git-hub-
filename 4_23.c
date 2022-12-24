//THIS PROGRAM IS CREATED BY 22TCE146
#include<stdio.h>
#define rowmax
#define col 1

int main()
{
    //int row=1,col=1;
    printf("\nMultiplication table (1 to 7)");
    printf("\n--------------------------------");
    printf("\n");

    do
    {

    col=1;
        do
        {
            printf("%d\t",row*col);
            col++;
        }
        while(col<=7);
        row++;
        printf("\n");
    }
    while(row<=10);
    printf("\nTHIS PROGRAM IS CREATED BY 22TCE146");

    return 0;
}
