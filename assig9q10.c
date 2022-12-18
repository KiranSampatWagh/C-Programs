#include<stdio.h>
            //predict the output
int main()
{
    int arr[] ={10,20,30,40,50};        //100
    int*p =arr;                         //200

    printf("%d\n",arr);             //100
    printf("%d\n",&arr);            //100   
    printf("%d\n",p);               //100
    printf("%d\n",*p);              //10ss
    printf("%d\n",sizeof(arr));     //20
    printf("%d\n",sizeof(arr[0]));  //4
    printf("%d\n",sizeof(p));       //8
    printf("%d\n",sizeof(*p));      //8
    return 0;
}