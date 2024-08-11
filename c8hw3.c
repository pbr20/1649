               //Blankspace remover

#include<stdio.h>

void blankremover(char str[] , char newstr[]);

int main(){

char str[1000];

char newstr[1000];

fgets(str , 1000 , stdin);

blankremover(str , newstr);




    return 0;
}

void blankremover(char str[] , char newstr[]){
  int j=0;
  
    for (int i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
          newstr[j] = str[i]; 
         j++;
        }
    }
    
    puts(newstr);
}