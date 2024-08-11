                //Finding highest frequency character in a string

#include<stdio.h>

void highestfrequencyc(char str[]);

int main(){



abbcbbbbbbcccc



    return 0;
}

void highestfrequencyc(char str[]){
   char ch;
    for(int i=1; str[i] != '\0'; i++){
      for(int j=0; j != i; j++){
        if(str[i] == str[j]){
            ch = str[i];
        }
      }
      
    }
}