#include<stdio.h>
#include<string.h>

int main(){

char string[200];

printf("Enter string: ");

fgets(string , 200 , stdin);      //We use fgets to input multiple words coz scanf can't input ' '

                    //REMOVING TRAILING NEWLINE CHRACTER

int length = strlen(string);

printf("Before length = %d\n",length);

for(int i=0; i<=length; i++){
    if(string[i] == '\n'){
        printf("string[%d] = \\n \n", i);    // \\n print \n and \\0 print \0
    }
  else  if(string[i] == '\0'){
        printf("string[%d] = \\0 \n", i);   //because fget() print a newline so u will get \n
    }                                       //there is always an terminator after the end of string so you will get \0
    else{
        printf("string[%d] = %c \n",i,string[i]);
    }
}
printf("string: %s\n",string);

string[strlen(string) -1] = '\0';  /*By subtracting -1 we moved from the null terminator to 
                                     in that memory where next line command or \n is what we
                                    are replacing with null terminator or \0*/
length = strlen(string);

printf("After length = %d\n",length);

for(int i=0; i<=length; i++){
    if(string[i] == '\n'){
        printf("string[%d] = \\n \n", i);    
    }
  else  if(string[i] == '\0'){
        printf("string[%d] = \\0 \n", i);  
    }                                      
    else{
        printf("string[%d] = %c \n",i,string[i]);
    }
}
printf("string: %s\n",string);

    return 0;
}