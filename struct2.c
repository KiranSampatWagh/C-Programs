

#include<stdio.h>

struct student
{
	int marks;
	int age;
	char division;
};

int main()
{
	struct student obj;
	struct student *ptr =NULL;

	ptr =&obj;

			//indericting accessing operator
	ptr->marks =90;
	ptr->age =23;
	ptr->division ='a';

	printf("size of ptr :%d\n", sizeof(ptr));
	printf("size of structure :%d\n",sizeof(struct student));

	return 0;
}