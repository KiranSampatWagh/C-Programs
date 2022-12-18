#include<stdio.h>

int main()
{
    int arr[4] ={11,21,51,101};

    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[2]));

    printf("%d\n",arr[2]);
    printf("%d\n",arr);
    printf("%d\n",&arr);

    printf("%d\n",arr+1);
    printf("%d\n",(&arr)+1);

    printf("%d\n",arr[2]);
    printf("%d\n",*(arr+2));
    printf("%d\n",*(2+arr));
    printf("%d\n",2[arr]);
    
    return 0;
}