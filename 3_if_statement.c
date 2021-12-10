#include<stdio.h>

main()
{
    int a=100;
    int b=15;
    if(a>b || b!=15)
    {
        a++;
        a++;
        b--;
    }   
    if(a<b || b==14)
    {
        a--;
    }
    else 
    {
       a=a-20; 
    }  
    printf("new a value = %d\n", a);
    printf("new b value = %d\n", b);

    if (a<100)
        printf("less than hundred\n");
    else if(a>150)
        printf("more than 150\n");
    else 
        printf("its in between 100 and 150\n");

    
}
