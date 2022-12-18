#include<stdio.h>

enum days {monday,tuesday,thursday,friday};

int main()
{
	enum days obj;

	printf("size of enum :%d\n",sizeof(obj));
	printf("monday :%d\n",monday);
	printf("tuesday :%d\n",tuesday);
	printf("thursday :%d\n",thursday);
	printf("friday :%d\n",friday);

	return 0;
}