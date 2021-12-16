#include<stdio.h>
int main()
{
    int array[20],i,j,swap;


    printf("Original array is:\n");

    for(i=0; i<20; i++)
        scanf("%d", &array[i]);

    for(i=0; i<19; i++){

        for(j=0; j<20-i; j++){
            if(array[j]>array[j+1]){
                swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }
    printf("Sorted array is:\n");
     for(i=0; i<20; i++)
        printf("%d ",array[i]);

     return 0;
}
