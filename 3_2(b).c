//THIS PROGRAM IS CREATED BY 22TCE146

#include<stdio.h>
#include<conio.h>
int main()
{
    int Yellow=10 , Pink=20,Calculate;
    printf("Sr.No.\t\tInstructions\t\t\tYellow\tPink");
    printf("\n1\t\tCount before execution\t\t%d\t%d",Yellow , Pink);
    Calculate = ++Yellow + Yellow++ + --Yellow + ++Pink - --Pink - --Pink;
    printf("\n2\t\tCount after execution\t\t%d\t%d",Yellow , Pink);
    printf("\n\nTHIS PROGRAM IS CREATED BY 22TCE146\n\n");
    return 0;
}

