#include<stdio.h>

typedef struct computerscienceandengneering{      //used to create alias for data types
  char name[100];
  int roll;
  float cgpa;
} CSE;                                          //alias    makes programme more short and simple

void printinfo(CSE A1);

int main(){

struct computerscienceandengneering AM1 = {"Rithen" , 243077 , 9.5};   

CSE AM2 = {"Liva" , 243078 , 10};      //Shortcut

printinfo(AM1);
printinfo(AM1);


    return 0;
}

void printinfo(CSE A1){
    printf("Student's name: %s\n",A1.name);
     printf("Student's roll: %d\n",A1.roll);
      printf("Student's cgpa: %.2f\n",A1.cgpa);
}