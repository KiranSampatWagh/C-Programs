#include<stdio.h>

struct demo
{
	int i;		//4
	float f;	//4
	double d;	//8	
};			//16

union hello
{
	int i;		//4
	float f;	//4
	double d;	//8
};			//8

int main()
{
	struct demo dobj;	
	union hello hobj;

	printf("size of the structure is :%d\n",sizeof(dobj));
	printf("size of the union is :%d\n",sizeof(hobj));

	dobj.i =11;
	dobj.f =90.8;
	dobj.d =90.5;

	hobj.f =90.4;

	printf("%f\n",hobj.f);
	printf("%f\n",hobj.d);
	
	return 0;
}