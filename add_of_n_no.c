/*
    steps to develop the application
    step 1:understand the problem statement
    step 2:write the algorithum
    step 3:decide the programming language (c/c++/java/python/___)
    step 4:write the program
    step 5:test the program
*/

//accept N number from user and perform addition 

//input
//value of N  =5
//value:10 20 30 40 50

//output
//addition is:150

//algorithum
/*
    start
        accept the no of element from user allocate 
        the memory to store that no 
        accept the no from user perform addition of 
        all no 
        disply the addition
    end    
*/

#include<stdio.h>       //for printf and scanf
#include<stdlib.h>      //for malloc and free

//////////////////////////////////////////////////////
//
//application name :addition of n no
//input :n no
//output :addition
//author :kiran sampat wagh
//date :18 september 2022
//
//////////////////////////////////////////////////////

int main()
{
    int *arr =NULL;     //pointer to hold address of array
    int isize =0;       //variable to hold size of array
    register int i =0;  //loop counter
    int isum =0;        //to hold addition

    printf("please enter how many element you want?\n");
    scanf("%d",&isize);

    //allocate the memory
    arr =(int *)malloc(isize * sizeof(int));
    printf("memory allocation is susccesful\n");

    printf("please enter the element\n");
    //  1       2       3
    for(i =0; i<isize;  i++)        //4
    {
        scanf("%d",&arr[i]);
    }
    
    //perform addition
    //  1       2       3
    for(i =0; i<isize; i++)         //4
    {
        isum =isum+arr[i];
    }

    printf("addition is :%d\n",isum);
    free(arr);
    printf("memory gets deallocated.\n");

    return 0;
}    