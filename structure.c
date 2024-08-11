#include<stdio.h>
#include<string.h>

struct student {          //structure name 
    char name[100];       //structure syntax
    int roll;
    float cgpa;
};

int main(){

struct student AM1;              // accessing structure 

AM1.roll = 243077;
AM1.cgpa = 9.5;

//AM1.name = "Rithen";                  //Wrong way coz it's array and we can't put equal to asign value into array

strcpy(AM1.name , "Rithen");        // we can't change array value by putting equal but we can copy value to array

printf("STUDENT NAME: %s\n",AM1.name);
printf("STUDENT ROLL: %d\n",AM1.roll);             //both input and output syntax for structure are same
printf("STUDENT CGPA: %.2f\n",AM1.cgpa);

struct student AM2;             

AM2.roll = 243078;
AM2.cgpa = 6.8;

strcpy(AM2.name , "Liva");        

printf("STUDENT NAME: %s\n",AM2.name);
printf("STUDENT ROLL: %d\n",AM2.roll);             
printf("STUDENT CGPA: %.2f\n",AM2.cgpa);

struct student AM3;             

AM3.roll = 243078;
AM3.cgpa = 10;

strcpy(AM3.name , "Rexus");       

printf("STUDENT NAME: %s\n",AM3.name);
printf("STUDENT ROLL: %d\n",AM3.roll);             
printf("STUDENT CGPA: %.2f\n",AM3.cgpa);

                    //METHOD 2

struct student BM1 ={"Ayane" , 243088 , 9.5};

printf("Student's name : %s",BM1.name);    //Initializing Structures //Have to maintain serial 



    return 0;
}