#include<stdio.h>
                // find error in program
extern int i;
extern int j;
extern int x;
extern int y =151;  //for y variable two different values are given
extern void fun();  //requride to acces second file 

void gun();

int main()
{
    printf("inside main\n");
    fun();
    gun();
    return 0;

}
int i =21;
void gun()
{
    printf("inside gun\n");
}