#include<stdio.h>
void printJ();
void printK();
int main ()
{
    char a;
printf("where are you from? \n");
printf("Enter j for Japan and k for Korea \n");
scanf("%c",&a);

if(a == 'j'){
    printJ();
}
else if(a == 'k'){
    printK();
}
else{
    printf("Alien!!!! \n");
}

return 0;

}

void printJ() {
    printf("KONICHIWA! \n");
}

void printK() {
    printf("ANNYEONGHASEYO! \n");
}