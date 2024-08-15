#include<stdio.h>

int main(){

FILE *fptr;

fptr =fopen("file.txt" , "r");   // "r" open to read

fptr =fopen("file.txt" , "rb");   //"rb" open to read in binary

fptr =fopen("file.txt" , "w");   //"w" open to write if the file don't exist then it will create a new one

fptr =fopen("file.txt" , "wb");   //"wb" open to write in binary

fptr =fopen("file.txt" , "a");   //"a" open to append it will open that file with whatever was written inside and u can also add text  
fclose(fptr);

fptr =fopen("newfile.txt" , "r");

if(fptr == NULL){
    printf("File doesn't exist\n");
}
else{
    fclose(fptr);
}

fptr = fopen("Newfile.txt" , "w");   //File don't exist so it will create a new file
                                    //after running this programme pls delete the new created file from hardware
fclose(fptr);
 
                                  //READING FROM A FILE  //uses of r
char ch[10000];
int a;

fptr = fopen("file1.txt" , "r");

fscanf(fptr , "%s" , ch);     //assign the string into ch //don't use &ch coz it's string
puts(ch);

fclose(fptr);

fptr = fopen("file2.txt" , "r");  

fscanf(fptr , "%d" , &a); //assign the int value to a //we can also other types of value from file
printf("Numbers: %d\n");

fscanf(fptr , "%d" , &a);
printf("Numbers: %d\n");

fscanf(fptr , "%d" , &a);
printf("Numbers: %d\n");

fclose(fptr);
                                //Writing inside a file //uses of w

fptr = fopen("filewrite.txt" , "w");

fprintf(fptr , "%s" , "Rithen");    //Replace the text with the written string here
                                    //check what's written inside before running the code to confirm it then write smth else other than Rithen after running the code

fclose(fptr);

                            //appending inside a file //uses of a

char name[100];

fgets(name , 100 , stdin);

fptr = fopen("file4.txt" , "a");

fprintf(fptr , "%s" , name);    //add the string or other types of  value inside the file and save it there 

    return 0;       
}