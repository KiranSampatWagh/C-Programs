#include<stdio.h>


int main()
{
    static int no1 = 11;
    int no2 =20;

    printf("inside static\n");
    printf("value of no1 is %d\n",no1);
    printf("size of no1 is %d \n",sizeof(no1));
    printf("size of no1 is %d \n",sizeof(no1++));
    no1++;
    printf("value of no1 is %d\n",no1);
    printf("inside nonstatic\n");
    printf("value of no2 is %d\n",no2);
    printf("size of no2 is %d \n",sizeof(no2));
    printf("size of no2 is %d \n",sizeof(no2++));
    printf("value of no2 is %d\n",no2);


    printf("%d\n",no1);

    return 0;
}