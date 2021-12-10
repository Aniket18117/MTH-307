#include<stdio.h>

main()
{
    int a=100;
    int b=15;
    printf("%d\n", (a>b)||(a==b));
    printf("%d\n", (a>b)&&(a!=100)&&(b==15)&&(b>10));

}
