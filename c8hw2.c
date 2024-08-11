                    //Finding highest frequency character in a string

#include<stdio.h>

void highestfrequencyc(char str[]);

int main(){

char str[1000];

fgets(str , 1000 , stdin);

highestfrequencyc(str);

    return 0;
}

void highestfrequencyc(char str[]){
   char ch;
   int count1 =0; int count2=0;
    for(int i=1; str[i] != '\0'; i++){
      for(int j=i; j >= 0; j--){
        if(str[i] == str[j] && str[i] != ' '){
          count1++;
        }
      }
      if(count1>count2){
      count2=count1 ;
      ch = str[i];
      }
      count1 =0;
      
    }
    printf("Highest frequency chracter %c appears %d times in this strings\n", ch , count2);
}