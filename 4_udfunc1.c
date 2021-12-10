#include <stdio.h>
/*
user defined function 1
*/
decorate(int x);
main()
{
    printf("Hello All\n"); // here I am starting code.
    decorate(1);
    printf("Have a great day\n");
    decorate(2); 
    printf("Hope you enjoyed the fest\n");
    decorate(3);
}

decorate(int x)
{
    if(x==1)
        printf("************\n");
    if(x==2)
        printf("?????????????\n");
    if(x==3)
        printf("------------\n");  
}
