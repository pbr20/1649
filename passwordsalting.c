#include<stdio.h>
#include<string.h>
void salt(char pass[]);

int main(){

char pass[100];

printf("Enter your password\n-");
scanf("%s",pass);

salt(pass);



    return 0;
}

void salt(char pass []) {

char newpass[200];
char salt[100] = {"16ÖJ¤#"};

strcpy(newpass , pass);        //newpass = pass

strcat(newpass , salt);        //newpass + salt

printf("User pass:");
puts(newpass);

}