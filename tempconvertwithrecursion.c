#include<stdio.h>

float tempconvcf(float celsius);

float tempconvfc(float far);

int main(){
    char e , a , cha;
    printf("Enter e to covert c to f and a to convert f to c :");
    scanf("%c",&cha);
    if(cha == 'e'){
        float celsius;
        printf("Enter the temperature :");
        scanf("%f",&celsius);
        printf("Temperature in farhrenheit is : %f \n", tempconvcf(celsius));
    }
    else if(cha == 'a'){
        float far;
        printf("Enter the temparature :");
        scanf("%f" ,&far);
        printf("Temperature in celsius is :%f \n", tempconvfc(far));
    }
    else{
        printf("Invalid character!! \n");
    }
    return 0;
}

float tempconvcf(float celsius){
    float far = (celsius*(9.0/5.0)) + 32;
    return far;
}

float tempconvfc(float far){
    float celsius =(far -32)*(5.0/9.0);
    return celsius;
}