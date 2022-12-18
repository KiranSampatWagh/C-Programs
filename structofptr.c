#include<stdio.h>

struct demo
{
	int a;
	int b;
};

int main()
{
	struct demo obj;
	struct demo *ptr;
	  //pointer of the structure
	ptr =&obj;

	obj.a =11;
	ptr->a =11;

	struct demo obj[6];		//48
	  //array of the structuer
	return 0;
}
