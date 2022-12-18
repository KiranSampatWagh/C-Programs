#include<stdio.h>

int addition(int ino1, int ino2)
{
	int ians =0;
	ians = ino1+ino2;
	return ians;
}

int main()
{
	int ivalue1 =0;
	int ivalue2 =0;
	int iret =0;

	printf("enter first no\n");
	scanf("%d",&ivalue1);

	printf("enter second no\n");
	scanf("%d",&ivalue2);

	iret =addition(ivalue1,ivalue2);

	printf("addition is :%d\n",iret);

	return 0;
	}