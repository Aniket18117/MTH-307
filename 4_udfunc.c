#include <stdio.h>
/*
user defined function 1
*/

int double_x(int y)
{
    return y*2;
}
void do_nothing()
{
    
}
int main()
{
    int x;
    for(x=0;x<10;x++)
        printf("%d\t%d\n",x,double_x(x));
    do_nothing();
}


