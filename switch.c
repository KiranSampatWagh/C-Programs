#include<stdio.h>

int main()
{
	int iTocan =0;

	printf("enter your tocan no\n");
	scanf("%d",&iTocan);

	switch(iTocan)
	{
		case 11:
			printf("boy tocan\n");
			break;
		case 21:
			printf("girl tocan\n");
			break;
		case 51:
			printf("mother tocan\n");
			break;
		case 101:
			printf("father tocan\n");
			break;
		default:
			printf("no tocan.....\n");
			break;
	}
	return 0;
}