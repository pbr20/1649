#include<stdio.h>

struct student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){

struct student AM1 ={"Rithen " , 243077 , 9.5};

struct student *ptr = &AM1;

printf("Student's roll: %d\n" ,(*ptr).roll);     

                            //Arrow operator

printf("Student's roll: %d\n" ,ptr -> roll);     //For better looking or understanding by editor 
printf("Student's cgpa: %.2f\n" ,ptr -> cgpa);
printf("Student's name: %s\n" ,ptr -> name);

return 0;


}

