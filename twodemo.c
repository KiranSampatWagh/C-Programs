#include <stdio.h>
extern int i;
extern int j;
extern int arr[4];
extern void fun();

void gun();

int main()
{
    printf("value of i is %d\n",i);
    printf("value of j is %d\n",j);
    j =51;
    printf("value of j is %d\n",j);
    printf("value from array is %d\n",arr[0]);

    fun();
    gun();
    return 0;
}

int i =21;
void gun()
{
    printf("inside gun");
}