#include<stdio.h>

struct demo
{
    int no;
    struct demo *next;
};

int main()
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    obj1.no =11;
    obj2.no =21;
    obj3.no =51;

    obj1.next =&obj2;
    obj2.next =&obj3;
    obj3.next =NULL;

    return 0;
    
}