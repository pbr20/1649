#include<stdio.h>
int main(){

char name [100];

printf("What's your name?\n");

gets(name);                              //input a string even multi words but it's unsafe ang gives yellow error

puts(name);                              //output a string even multi words also it gives a next line automatically

char name1[500];

printf("What do you do?\n");

fgets(name1 , 500 , stdin);               //Stops when (n-1) character input or new line is entered  
                                          //stdin means standard input
puts(name1);

    return 0;
}