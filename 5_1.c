//THIS PROGRAM IS CREATED BY 22TCE146
#include<stdio.h>
int main()
{
        int h;
        printf("\nEnter your father height  :  ");
        scanf("%d",&h);
        if(h<150)
        {
            printf("\nDwarf");
        }
        else if(h>=150 && h<165)
        {
            printf("\nAverage height");
        }
        else if(h>=165 && h<=195)
        {
            printf("\nTall");
        }
        else
        {
            printf("\nAbnormal height");
        }

        printf("\nTHIS PROGRAM IS CREATED BY 22TCE146");



        return 0;
}
