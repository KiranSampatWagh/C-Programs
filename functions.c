#include<stdio.h>

int multiplaction(int No1 ,int No2)
{
    int ans = 0;
    ans = No1 * No2;
    return ans;
}

int main()
{
    int a = 10 , b = 11;
    auto int mult = 0;
    mult = multiplaction(a,b);

    printf("multiplaction is : %d\n",mult);
    
    return 0;

}