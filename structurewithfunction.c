#include<stdio.h>
#include<string.h>

//void printinfo(struct student s1);   //Wrong coz struct student isn't introduced yet;

struct student{
    char name[100];
    int roll ;
    float cgpa;
};

void printinfo(struct student s1);

int main(){

struct student AM1 = {"Rithen" , 243077 , 9.5};     //call by value
struct student AM2 = {"Liva" , 243078 , 10};
struct student AM3 = {"Ayane" , 243079 , 9.5};    


printinfo(AM1);
printinfo(AM2);
printinfo(AM3);


    return 0;
}

void printinfo(struct student s1){
    printf("Student's name : %s\n",s1.name);
     printf("Student's roll : %d\n",s1.roll);
      printf("Student's cgpa : %.2f\n",s1.cgpa);

      strcpy(s1.name , "Roblox");       //Even passing array with structure is also call by value
}
