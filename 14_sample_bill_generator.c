// Developed by Dileepa Bandara

#include<stdio.h>

void output(float ba, float da)
{
    float dba;
    dba = ba - da;
    printf("\n Discounted Bill Amount: ", dba);
}

void calculate(float ba, float dr)
{
    float da;
    da = ba*dr;
    printf("\n Discount Amount: ", da);
    output(ba, da);
}

void input()
{
    float ba, dr;
    printf("Insert Bill Amount: ");
    scanf("%f", &ba);
    printf("Insert Discount Rate: ");
    scanf("%f", &dr);
    calculate(ba, dr);
}

void main ()
{
    input();
}
