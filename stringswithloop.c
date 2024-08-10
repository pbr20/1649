#include<stdio.h>

void print(char name[]);

int main(){

char name[] = {'R' , 'I' , 'T' , 'H' , 'E' , 'N' ,' ', 'B' , 'A' , 'R' , 'U' , 'A' , '\0'};   //method 1

char name1[] = {"PUSPAK BARUA"};      //method 2

print(name);

print(name1);

    return 0;
}

void print(char name[]){
    for(int i=0; name[i] != '\0'; i++){
        printf("%c",name[i]);
    }
    printf("\n");
}