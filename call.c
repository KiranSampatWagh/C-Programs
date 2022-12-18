#include<stdio.h>

void demo()
{
    auto int A = 10;
    A++;
    printf("value of demo : %d\n",A);

}

void hello()
{
    static int B =10;
    B++;
    printf("value of hello : %d\n",B);

}

int main()
{
    demo();
    demo();
    demo();

    hello();
    hello();
    hello();

    return 0;
}