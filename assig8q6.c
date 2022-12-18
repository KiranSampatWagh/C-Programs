#include<stdio.h>
                // find error in program

auto int no =10;        //for global varible don't give auto storage class
void gun()
{
    register float fvalue =20.3;    //for float do not have register storage class
    printf("value of float is %f\n",fvalue);
}

int main()
{
    printf("inside main\n");
    gun();
    return 0;

}