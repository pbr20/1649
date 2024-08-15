                    ///File part 2

#include<stdio.h>

int main(){

FILE *fptr;

                //uses of fgetc and fputc shortcut of fscanf and fprintf 

                    //fgetc to read the value from the file character wise

fptr = fopen("file5.txt" ,"r");

printf("%c\n",fgetc(fptr));   //character wise Rithen
printf("%c\n",fgetc(fptr));
printf("%c\n",fgetc(fptr));
printf("%c\n",fgetc(fptr));
printf("%c\n",fgetc(fptr));
printf("%c\n",fgetc(fptr)); 

char str[10000];

fgets(str ,100 , fptr);       //to read the string value from file 

puts(str);                   //string 

fclose(fptr);

                    //fputc to write the value inside the file character wise

fptr = fopen("filewrite.txt" , "w");

fputc('C' , fptr);     //Chracter wise CAR
fputc('A' , fptr);
fputc('R' , fptr);
fputc('\n' , fptr);
fputc('C' , fptr);              //CAT
fputc('A' , fptr);
fputc('T' , fptr);

fputs("\nShe and her cat" , fptr);         //fputs to write the value inside the file string wise

fclose(fptr);

    return 0;
}