#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

struct student CSE[40];

CSE[0].roll = 243077;
CSE[0].cgpa = 9.5;
strcpy(CSE[0].name , "Rithen");

printf("Student's name: %s",CSE[0].name);

    

    return 0;
}