#include<stdio.h>

//typedef june_nav   navin_nav

typedef int INTEGER;

typedef unsigned long int ULONG;

struct Demo
{
    int a;
    int b;
};

typedef struct Demo DEMO;
typedef struct Demo * PDEMO;

int main()
{
    INTEGER i = 10;      //int i =10;
    ULONG j = 21;       //unsigned long int j =21;
    DEMO obj;           //struct Demo obj;
    PDEMO ptr = &obj;  //struct Demo *ptr =&obj;

    return 0;
}