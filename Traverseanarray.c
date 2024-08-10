#include<stdio.h>
int main()
{
int age[5];

//input 
int *ptr = &age[0];
for(int i=0; i<5; i++){
    printf("%d) age : ", i  );
    scanf("%d",(ptr+i));      //here increase by 1 equal to increase by 1 integer value or 4 bytes 
}                             //for more review pointerArithmetic.c (6:39:00)aprx 
         //marks+i is also same as ptr+i
//output
for(int i=0; i<5; i++){
    printf("%d) age: %d\n",i,*(ptr+i));
}

//input 

for(int i=0; i<5; i++){
    printf("%d) age : ", i  );
    scanf("%d",&age[i]);      
}                            //or we can do this without pointers

//output
for(int i=0; i<5; i++){
    printf("%d) age: %d\n",i,age[i]);
}


    return 0;
}

    