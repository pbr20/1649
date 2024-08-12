#include<stdio.h>
#include<string.h>

int main(){        //strlen

char name[] = {"Puspak Barua Rithen"};

puts(name);

printf("Total chracters in name with space:%d\n",strlen(name)); //strlen word counter exclude null(\0) chracter

                        //strcpy

char name1[] = {"Puspak"};
char name2[] = {"Rithen"};

strcpy(name1,name2);       //Replace the first string with second string in other words copies value of old s to new s

puts(name1);

                            //strcat

char name3[] = "Rithen ";
char name4[] = "Barua";

strcat(name3 , name4);      //concatenates first string with second string  
                            //Warning it don't give space between two strings but if u give space after the end of first s then there will be space between to s
puts(name3);

                            //strcmp
                //this funtion used in dictionary
                
                                    /*Compares 2 strings & returns a value 
                                        0 -> string equal
                                    positive -> first > second (ASCII)
                                    negative -> first < second (ASCII) */
char com1[] = "abc";
char com2[] = "apple";              
char com3[] = "abc";
char com4[] = "abd";

printf("%d\n",strcmp(com1 , com3));        
printf("%d\n",strcmp(com1 , com2));        //if first character is equal the it will check next character till its equal
printf("%d\n",strcmp(com1 , com4));        //it compare the ascii value 
printf("%d\n",strcmp(com4 , com1));   

                //strcspn

char sa[] = "ABCDEfFG243077";
char num[] = "0123456789";

int a1 =strcspn(sa , num);

char *ptr = sa + a1;     //array is a pointer 

printf("Total character without numbers:%d\n",a1);

printf("Only numbers: %s\n",ptr);  //when it's strings it print the value instead of address

    return 0;
}