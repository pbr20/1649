                       // counting vowels

#include<stdio.h>

int vowel (char str[]);

int main(){

char str[1000];

fgets(str , 1000 , stdin);



printf("Total vowel count :%d\n",vowel(str));




    return 0;
}

int vowel (char str[]){
    int count =0;
    for (int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count ++;
        }
       
    }
     return count;
}