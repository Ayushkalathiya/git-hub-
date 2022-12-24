//THIS PROGRAM IS CREATED BY 22TCE146

#include<stdio.h>
int main()
{
    long int population = 80000;
    long int men, women, literate, illiterate, literate_men, literate_women, illiterate_women, illiterate_men;
    men = population * 52 / 100;
    women = population - men;
    literate = population * 48 / 100;
    literate_men = population * 35 / 100;
    literate_women = literate -literate_men;
    illiterate_men = men - literate_men;
    illiterate_women = women - literate_women;
    printf("Sr.No.\t\tOutcome\t\t\t\tValue");
    printf("\n1\t\tTotal Population               : %ld\n",population);
    printf("2\t\tNumber of literate(men + women): %ld\n",literate);
    printf("3\t\tNumber of Men                  : %ld\n",men);
    printf("4\t\tNumber of Literate men         : %ld\n",literate_men);
    printf("5\t\tNumber of illiterate men       : %ld\n",illiterate_men);
    printf("6\t\tNumber of Women                : %ld\n",women);
    printf("7\t\tNumber of Literate women       : %ld\n",literate_women);
    printf("8\t\tNumber of illiterate women     : %ld\n",illiterate_women);
    printf("\nTHIS PROGRAM IS CREATED BY 22TCE146");
    return 0;
}














