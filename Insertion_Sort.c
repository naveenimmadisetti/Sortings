#include <stdio.h>

int main()
{
    printf("Hello World!\n");
    int *p, *n, length, key , j ;
    printf("Enter the size of the list:");
    scanf("%d", &length);
    printf("size of the list: %d \n" , length);
    p = (int *) malloc (sizeof(int) * length);
    for(int j =0 ; j < length ; j ++){
        scanf("%d" , p + j);
        printf("%d \t" ,p [j] );
    }
    printf("\n");
    int i;
    for(  j = 1; j < length ; j++ ){
        key = p[j];
        i = j -1;
        while(( p[i] > key ) && i >= 0){
            p[i + 1] = p[i];
            i --;
        }
        p[i + 1] = key;
    }
    for( j =0 ; j < length ; j ++){
        //scanf("%d" , p + j);
        printf("%d \t" ,p [j] );
    }
    return 0;
}
