                            //counting odd numbers with funtion and array
#include<stdio.h>

int oddn(int odd[] , int n);

int main(){

int odd[] = {1 , 2 , 3 , 4 , 5 , 6};



printf("Total odd numbers : %d\n",oddn(odd,6));

    return 0;
}

int oddn(int odd[] , int n){
 int count = 0;
 for(int i = 0; i<n; i++){
    if(odd[i] % 2 != 0){
        count ++;
    }
}
return count;

}