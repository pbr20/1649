#include<stdio.h>

int percentage(int science , int math , int japanese );

int main(){
  int japanese =95 ; int math = 80; int science = 93;
printf("Percentage of all subject : %d \n", percentage(science,math,japanese));
    return 0;
}

int percentage (int science , int math , int japanese){

    return ((science+math+japanese)/3);
}