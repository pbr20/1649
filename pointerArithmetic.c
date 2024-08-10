#include<stdio.h>
int main()
{
    //Pointers can be incremented and decremented

    int age = 20;

    int *ptr = &age;

    printf("%u \n",ptr);

    ptr++;   //it will increase 4 bytes value or 1 int memory value coz 1 int value take 4 bytes
  
    printf("%u \n",ptr);

    ptr--;   //it will decrease 4 bytes value or 1 int memory value coz 1 int value take 4 bytes

    printf("%u \n",ptr);

    //float memory

    float age1 = 20.0;

    float *ptr1 = &age1;

    printf("%u \n",ptr1);

    ptr1++;   //it will increase 4 bytes value or 1 float memory value coz 1 float value take 4 bytes
  
    printf("%u \n",ptr1);

    ptr1--;   //it will decrease 4 bytes value or 1 float memory value coz 1 float value take 4 bytes

    printf("%u \n",ptr1);

       //character memory

    char star = '*';

    char *ptr2 = &star;

    printf("%u \n",ptr2);

    ptr2++;   //it will increase 1 byte value or 1 character memory value coz 1 character value take 1 byte
  
    printf("%u \n",ptr2);

    ptr2--;   //it will decrease 1 byte value or 1 character memory value coz 1 character value take 1 byte

    printf("%u \n",ptr2);

    //we can also subtract one pointer from another

    int age5= 21;
    int age5_ = 19;

    int *ptr5 = &age5;
    int *ptr5_ = &age5_;

    printf("%u \n %u \n Difference :%u \n",ptr5,ptr5_,ptr5-ptr5_ ); //It won't show the byte diff but the int memory value diff
    
    //we can also compare between two pointers
    
    printf("Comparision: %u\n",ptr5 == ptr5_);

    ptr5_ = &age5;

    printf("Comparision: %u\n",ptr5 == ptr5_); //If equal then true or 1 otherwise false or 0
    
    //we can't compare or find difference of diff data types pointer //it will show yellow error


    //char ab = 'a';

    //char *ptrab = &ab ;

    //printf("Comparision : %u \n" , ptrab == ptr5_);


    return 0;
}