#include<stdio.h>

struct demo
{
	int a;
	int b;
};	//8

struct hello
{
	int c;
	float d;
	struct demo dobj;
};	//16

int main()
{
	struct hello hobj;	//16
	
	hobj.c =11;
	hobj.d =10.9;
	hobj.dobj.a =21;
	hobj.dobj.b =51;

	printf("size of struct hello is :%d\n",sizeof(struct hello));
	
	return 0;
}