#include <stdio.h>

main()
{
    int a;
    a=3;
    while(a>0)
    {
        printf("I am in while loop\n");
        a=a-1;
    }
    printf("I am out of while loop\n");
    for(a=3;a>0;a=a-1)
        {
            printf("I am in for-loop\n");
        }
    printf("I am out of for loop\n");

}
