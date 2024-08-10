                        //counting words with loop,strings without using library function

#include<stdio.h>

int countlength(char paragraph[] );

int main(){

char paragraph[1000] ;

fgets(paragraph , 1000 , stdin);

puts(paragraph);

printf("Total words count:%d\n",countlength(paragraph));

    return 0;
}

int countlength(char paragraph[]){
    int count = 0;
    for(int i=0; paragraph[i] != '\0'; i++){
        count ++;
    }
    return count-1;      //if we dont subtract one from count then it will also count the null(\0) character.
}