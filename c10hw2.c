   //Replace the data in file of Q(a) with the number of vowels in the string.

#include<stdio.h>
int main(){

FILE *fptr;

char ch;
int count = 0;

fptr = fopen("c10hw2.txt" , "r");

if(fptr == NULL){
    printf("File doesn't exist\n");

    return 1;
}
ch = fgetc(fptr);      //fgetc more better that fscanf in case of character assign

    while(ch != EOF){

    if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        count ++;
    }
      ch = fgetc(fptr);
        
          }

          fclose(fptr);

          fptr = fopen("c10hw2.txt" , "w");

          fprintf(fptr , "Vowel: %d" , count);

    fclose(fptr);
    
    
    
    
    
    return 0;
}