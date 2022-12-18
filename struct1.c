#include<stdio.h>

struct student
{
    int marks;
    int age;
    char div;
};

int main()
{
    struct student amit;
    struct student sumit;

    amit.marks =97;
    amit.age =21;
    amit.div ='A';
    
    sumit.marks =98;
    sumit.age =22;
    sumit.div ='B';
    
    return 0;

}