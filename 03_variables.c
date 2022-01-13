// Developed by Dileepa Bandara

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char firstName[7] = "Dileepa";
int age = 24;
char location[] = "Internet World";

int main(){
    printf("My name is %s and I am %d years old\n", firstName, age);

    char userName[5] = "abced";
    printf("Before ERROR: %s\n", userName);

    userName[2] = 'l';
    printf("After FIXED: %s\n", userName);

    printf("Current location: %s\n", location);
    strcpy(location, "Office");
    printf("Current location: %s\n", location);

    return 0;
}