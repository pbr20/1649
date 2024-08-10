                            //checking chracter

#include<stdio.h>

void checkch(char str[] , char ch);

int main(){

char str[1000];
char ch = 'R';

fgets(str , 1000 , stdin);

checkch(str , ch);

    return 0;
}

void checkch(char str[] , char ch){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("Chracter %c does exist\n",ch);

            return;
        }
    }
    printf("Chracteer %c doesn't exist\n",ch);
}