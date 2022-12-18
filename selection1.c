#include<stdio.h>
#include<stdbool.h>		//header file = boolean
	
bool checkeven(int ino)
{
	if((ino%2) ==0)		// %  modulo operator
	{			// == assignment operator
		return true;		
	}
	else
	{
		return false;		
	}
}

int main()
{
	int ivalue =0;
	bool bret =false;	//false is also 0

	printf("enter one no\n");
	scanf("%d",&ivalue);	

	bret =checkeven(ivalue);
	
	if(bret==true)
	{
		printf("it is even no\n");
	}
	else
	{	
		printf("it is odd no\n");
	}
	
	return 0;
 }