         //Make a system that can store information of all students, teachers & staff of your college in the form of structures.

#include<stdio.h>
#include<string.h>

typedef struct information {
   char post[100];
   char Department[100];
   char name[100];
   int  id;
}info;

int main(){

char status [100];
char confirmation;
int s1=10;
int s2=10;
int s3=10;
info in[100];
int count =0;

printf("BLOCK LETTER\n");

while(count<100){
printf("Do you want to enter information Y/N\n");
scanf(" %c",&confirmation);
getchar();

if(confirmation == 'Y'){

printf("Enter status: ");


fgets(status , sizeof(status) , stdin);

status[strcspn(status, "\n")] = '\0';  //Remove trailing newline character from fgets // strcspn(status ,"\n") == value where \n included
                                 
s1 = strcmp(status , "STUDENT");     //IF we hadn't removed trailing newline chracter then the comparison of status would be with "student\n" 
s2 = strcmp(status , "TEACHER");     //which will obviously make noise 
s3 = strcmp(status , "STAFF");

if(s1 == 0){
   strcpy(in[count].post , "STUDENT");
   printf("Department:");
   scanf("%s",&in[count].Department);
   printf("Name:");
   scanf("%s",&in[count].name);
   printf("Id:");
   scanf("%d",&in[count].id);
}

else if(s2 == 0){
   strcpy(in[count].post , "TEACHER");
   printf("Department:");
   scanf("%s",&in[count].Department);
   printf("Name:");
   scanf("%s",&in[count].name);
   printf("Id:");
   scanf("%d",&in[count].id);
}

else if(s3 == 0){
   strcpy(in[count].post , "STAFF");
   printf("Department:");
   scanf("%s",&in[count].Department);
   printf("Name:");
   scanf("%s",&in[count].name);
   printf("Id:");
   scanf("%d",&in[count].id);
}
else {
    printf("INVALID STATUS\n");
    continue;  // Skip the rest of the loop and prompt for input again
}

count ++;

}

else if(confirmation == 'N'){
    printf("Goodbye\n");
    break;
}

else{
   printf("Invalid input.\n Please enter Y or N\n");
}



}
for(int i=0 ; i<count; i++){
printf("Post: %s Department: %s Name: %s Id: %d\n",in[i].post,in[i].Department,in[i].name,in[i].id);
}
    return 0;
}
