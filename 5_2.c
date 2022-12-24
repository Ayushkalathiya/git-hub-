//THIS PROGRAM IS CREATED BY 22TCE146
#include<stdio.h>
#include<math.h>
int main()
{
    float d,root1,root2,imaginary;
    int a,b,c;
    printf("\nEnter a : ");
    scanf("%d",&a);
    printf("\nEnter b : ");
    scanf("%d",&b);
    printf("\nEnter c : ");
    scanf("%d",&c);
    d=(b*b)-4*a*c;
   // printf("\n%d",d);
    switch(d>0)
    {
    case 1:
            root1 = (-b + sqrt(d)) / (2*a);
            root2 = (-b - sqrt(d)) / (2*a);
            printf("\nRoot1 :%.2f",root1);
            printf("\nRoot2 : %.2f",root2);
            break;
    case 0:
            switch(d<0)
            {
               case 1:  root1 = root2 = -b / (2*a);
                        imaginary = sqrt (-d) / (2*a);
                        printf("\nRoot1 : %.2f",root1);
                        printf("\nimaginary : %.2f",imaginary);
                        break;
               case 0:
                        switch(d==0)
                        {
                            case 1 :
                                    root1 = root2 = -b / (2*a);
                                    printf("\nRoot1 : %.2f",root1);


                         }
                default :
                            printf("\nSORRY");

            }


    }

    printf("\nTHIS PROGRAM IS CREATED BY 22TCE146");

    return 0;
}
