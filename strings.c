#include<stdio.h>

int main() {

char name[] = {"Rithen Barua"};             //it's correct if you dont use 2nd bracket

printf("%s\n",name);       //%s -- strings specifier
                         // name is a pointer 

char name1[40];

printf("What's your name?\n");
scanf("%s",name);                         //scanf can't input multiple words and don't use this it make other function unfuntional especially strings funtion

printf("Your name is %s",name);

                           


    return 0;
}