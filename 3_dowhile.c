#include <stdio.h>

main()
{
    int a=-10;
    while(a<0)
    {
        printf("You are inside while loop\n");
       // a=a+1;
    }
    printf("Came out of the while loop\n");
    do
    {
        printf("You are inside do-while loop\n");
        a=a+1;
    }while(a<0);
    printf("after do while loop\n");
    
}
