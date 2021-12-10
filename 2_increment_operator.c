#include<stdio.h>

main()
{
    int a=100;
    int b=15;
    printf("a value before increment %d\n",a);
    a=a+1;
    //a+=1
    printf("a value after increment %d\n",a);
    // using increment operator
    printf("a value using incrment operator as prefix %d\n", ++a);
    printf("a value using incrment operator as suffix %d\n", a++);
    printf("a value after suffix increment operation %d\n", a);

}
