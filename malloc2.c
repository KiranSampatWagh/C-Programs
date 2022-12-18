#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size =0;
    int *arr =NULL;

    printf("enter the size of array\n");
    scanf("%d",&size);

    arr =(int *)malloc(sizeof(int) * size);

    //use the memory

    free(arr);
   
    return 0;
}