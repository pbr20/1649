                //Dynamic Memory Allocation

#include<stdio.h>
#include<stdlib.h>

int main(){

                        //Malloc or Memory allocation
                    //takes number of bytes to be allocated & returns a pointer of type void

int *ptr;

ptr =(int*) malloc(5 * sizeof(int));  //(int*) change void type to int type
                                        //(5* sizeof(int)) == total number of bytes
ptr[0] = 1;
ptr[1] = 2;
ptr[2] = 3;
ptr[3] = 5;
ptr[4] = 6;

for(int i=0; i<5; i++){
    printf("Numbers: %d\n",ptr[i]);
}
                        //calloc() == continuous allocation use for assigning null value into memory
                //initializes with 0
                // Use calloc when you need to initialize with 0 coz it's gurrenty wthe 0 initialization when malloc don't
float *flptr;

flptr =(float*) calloc(5 , sizeof(float));  //(float*) change void type to float type
                                        //(5, sizeof(float)) == number of memory location (float type)


for(int i=0; i<5; i++){
    printf("Numbers: %.2f\n",flptr[i]);
}

                                //free()

    //Compiler can free static memory allocation by itself but it can't free memory that is allocated by malloc or calloc
  //So in this case We use it to free memory that is allocated using malloc & calloc

free(flptr);

flptr =(float*) calloc(2 , sizeof(char)); 



for(int i=0; i<2; i++){
    printf("Numbers: %.4f\n",flptr[i]);
}

                //realloc() or re allocation

            //reallocate (increase or decrease) memory using the same pointer & size.
            // use to save memory or increase memory in need

int *a;

a = (int*) malloc(5 * sizeof(int));

for(int i=0; i<5; i++){
    printf("Enter number %d: ",(i+1));
    scanf("%d",&a[i]);
}

a = realloc(a , 8);    //Increased size from 5 to 8

for(int i=0; i<8; i++){
    printf("Enter number %d: ",(i+1));
    scanf("%d",&a[i]);
}

for(int i=0; i<8; i++){
    printf("Number %d: %d",(i+1),a[i]);    //print
   
}

    return 0;
}
