                 //Lowercase to uppercase

#include<stdio.h>

void Toupper(char str[]);

int main(){


char str[1000];

fgets(str , 1000 ,stdin);

Toupper(str);

    return 0;
}

void Toupper(char str[]){
   char up[1000];
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] >= 97 && str[i] <= 122){
           str[i] = str[i] -32;
        }
    }
    puts(str);
}