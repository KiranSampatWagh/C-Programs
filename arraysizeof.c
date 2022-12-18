#include<stdio.h>

int main()
{
    int Arr[5]={10,20,30,40,50};

    printf("base address of array : %p\n",Arr);
    printf("base address of array : %p\n",&Arr);
    printf("size of array : %d\n",sizeof(Arr));

    return 0;
}