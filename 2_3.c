#include<stdio.h>
#include<conio.h>
int main()
{
    long int BasicSalary,DA,HRA,MA,TA,PF,Gross_salary,Net_salary,It=500;
    printf("\nEnter Basic Salary : ");
    scanf("%ld",&BasicSalary);
    printf("\nSR.No\t\tInput\t\t\tAmount");
    printf("\n1\t\tBasicSalary\t\t%ld",BasicSalary);
    //Allowances
    DA=BasicSalary*70/100;
    printf("\n2\t\tDA of BasicSalary\t%ld",DA);
    HRA=BasicSalary*7/100;
    printf("\n3\t\tHRA of BasicSalary\t%ld",HRA);
    MA=BasicSalary*2/100;
    printf("\n4\t\tMA of BasicSalary\t%ld",MA);
    TA=BasicSalary*4/100;
    printf("\n5\t\t\TA of BasicSalary\t%ld",TA);

    //Deduction
    PF=BasicSalary*12/100;
    printf("\n6\t\tPF of BasicSalary\t%ld",PF);
    Gross_salary=BasicSalary+(DA+HRA+MA+TA);
    printf("\n7\t\tGross Salary\t\t%ld",Gross_salary);
    Net_salary=Gross_salary-(PF+It);
    printf("\n8\t\tNet Salary\t\t%ld",Net_salary);

    return 0;
}
