#include<stdio.h>
                // pridect output
int main()
{
    int arr[6] ={10,20,30};
    int no =2;

    printf("%d\n",arr[0]);      //10
    printf("%d\n",arr[no]);     //30
    printf("%d\n",arr[3-1]);    //30   
    printf("%d\n",arr);         //100
    printf("%d\n",arr+1);       //104
    printf("%d\n",(&arr)+1);    //104
    printf("%d\n",arr+3);       //112
    printf("%d\n",&(arr[3]));   //112
    printf("%d\n",arr[4]);      //0
    printf("%d\n",&(arr[5]));   //120
    printf("%d\n",2[arr]);      //30
    printf("%d\n",arr[5]);      //0
    return 0;

}