#include<stdio.h>

int main(){
    
FILE *fptr;
char ch;

fptr = fopen("fileEOF.txt" , "r");

ch = fgetc(fptr);

while(ch != EOF){
    printf("%c",ch);
    ch = fgetc(fptr);
}

printf("\n");

fclose(fptr);







    return 0;
}