#include<stdio.h>

int main()
{
    int ino1 =0;
    int ino2 =0;

    printf("enter first no:\n");
    scanf("%d",&ino1);
    printf("ente second no:\n");
    scanf("%d",&ino2);
    
    if(ino1>ino2)
    {
        printf("%d is max\n",ino1);
    }
    else
    {
        printf("%d is max\n",ino2);
    }
    return 0;
}