               //up to low case and vice versa

#include<stdio.h>

void chtrans(char str[]);

int main(){


char str[1000];

fgets(str , 1000 , stdin);

chtrans(str);



  return 0;
}

void chtrans(char str[]){
  for(int i=0; str[i] != '\0'; i++){
    if(str[i] >= 65 && str[i] <= 90){
      str[i] = str[i] + 32;
    }
    else if(str[i] >= 97 && str[i] <= 122){
      str[i] = str[i] - 32;
    }
  }
  puts(str);
}