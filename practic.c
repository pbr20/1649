#include<stdio.h>

int main() {

char name[] = {"Rithen Barua"};

printf("%s\n",name);       //%s -- strings specifier
                         // name is a pointer 

char name1[40];

printf("What's your name?\n");
scanf("%s",name);                         //scanf can't input multiple words

printf("Your name is %s",name);*/

                            //string function

char bio[100];

//gets(bio);               //input a string even multi words but it's unsafe and it's not working here

//puts(bio);               //output a string even multi words also it gives next line automatically

fgets(bio , 100 , stdin);

puts(bio);


    return 0;
}