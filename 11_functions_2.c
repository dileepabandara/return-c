// Developed by Dileepa Bandara

#include<stdio.h>

void free_data()
{
    printf("\n  ---------------- Apply For Bonus Data ---------------- \n");

    int employee_no;\
    printf("\n  Enter your employee number: ");
    scanf("%d", &employee_no);

    int plan;
    printf("\n  Select your current Internet Plan \n ");
    printf("\tPress 1 for Home Plan Rs. 120/= \n");
    printf("\tPress 2 for Lite Plan Rs. 200/= \n");
    printf("\tPress 3 for Pro Plan Rs. 300/= \n");
    printf("\n  Select: ");
    scanf("%d", &plan);

    if (plan == 1)
    {
         printf("\t Home Plan \n");
         printf("\t 20 GB \n");
         printf("\t Rs. 120/= \n");
         printf("\n  Your data has been added to your account of %d" , employee_no);

    }
    else if (plan == 2)
    {
         printf("\t Home Plan \n");
         printf("\t 40 GB \n");
         printf("\t Rs. 200/= \n");
         printf("\n  Your data has been added to your account of %d" , employee_no);
    }
    else if (plan == 3)
    {
         printf("\t Home Plan \n");
         printf("\t 80 GB \n");
         printf("\t Rs. 300/= \n");
         printf("\n  Your data has been added to your account of %d" , employee_no);
    }
    else
    {
         printf("Enter a valid answer");
         printf("\n  Thank You \n\n");
    }

    //menu();
}

void bonus_salary()
{
    printf("\n  ---------------- Apply For Bonus Salary ---------------- \n");

    int employee_no;\
    printf("\n  Enter your employee number: ");
    scanf("%d", &employee_no);

    float salary;
    printf("  Enter your current salary: ");
    scanf("%f", &salary);

    if ( salary <= 10000 )
    {
        float bonus = salary * 0.7;
        float current_salary = bonus + salary;
        printf("\n  Your Previous Salary = %0.2f", salary);
        printf("\n  Your Bonus = %0.2f", bonus);
        printf("\n  Your Current Salary = %0.2f", current_salary);
        printf("\n  Your bonus has been added to your account of %d" , employee_no);
        printf("\n  Thank You \n\n");
    }
    else if ( salary <= 20000 )
    {
        float bonus = salary * 0.5;
        float current_salary = bonus + salary;
        printf("\n  Your Previous Salary = %0.2f", salary);
        printf("\n  Your Bonus = %0.2f", bonus);
        printf("\n  Your Current Salary = %0.2f", current_salary);
        printf("\n  Your bonus has been added to your account of %d" , employee_no);
        printf("\n  Thank You \n\n");
    }
    else if (salary <= 30000)
    {
        float bonus = salary * 0.3;
        float current_salary = bonus + salary;
        printf("\n  Your Previous Salary = %0.2f", salary);
        printf("\n  Your Bonus = %0.2f", bonus);
        printf("\n  Your Current Salary = %0.2f", current_salary);
        printf("\n  Your bonus has been added to your account of %d" , employee_no);
        printf("\n  Thank You \n\n");
    }
    else
    {
        printf("\n  Sorry You Cannot Apply For This");
        printf("\n  Thank You \n\n");
    }

    //menu();
}

void menu()
{
    int a;
    printf("\n  ---------------------------------------------------- \n");
    printf("\tPress 1 to Apply for Bonus Data \n");
    printf("\tPress 2 to Apply for Bonus Salary \n");
    printf("\tPress Other button exit \n");
    printf("\n  Press: ");
    scanf("%d", &a);

    if(a == 1)
    {
        free_data();
    }
    else if(a == 2)
    {
        bonus_salary();
    }
    else
    {
        printf("\n  Thank You For Use Service \n\n");
    }
}

void main ()
{
    printf("\n\t\t########## BONUS PACKAGE ########## \n\n");
    printf("  Hello Employee! Due to the COVID-19 pandemic we offers you bonus packages \n");
    menu();
}