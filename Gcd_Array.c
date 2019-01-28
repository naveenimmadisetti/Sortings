// Gcd of the Array
#include <stdio.h>
# include <stdlib.h>
int Gcd(int small , int large){
    if(small == 0){
        return large;
    }
    else{
        return Gcd(large % small , small);
    }
}
int Array_Gcd(int *inp ,int length ){
    int result = 0;
    for(int i = 0  ; i < length ; i++){
        result = Gcd(result , inp[i]);
    }
    return result;
}

void main()
{
    //printf("Hello World!\n");
    int length , *arr, * gcd_out;
    printf("Enter the size of the array : \n");
    scanf("%d" , &length);
    arr = (int *) malloc (sizeof(int) * length);
    for(int j =0 ; j < length ; j ++){
        scanf("%d" , arr + j);
        //printf("%d \t" ,arr [j] );
        
    }
    for(int j =0 ; j < length ; j ++){
        //scanf("%d" , arr + j);
        printf("%d \t" ,arr [j] );
        
    }
    * gcd_out = Array_Gcd(arr , length);
    printf(" \nThe GCD of the Array is :%d \n" ,* gcd_out);
    //return 0;
}
