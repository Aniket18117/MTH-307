#include<stdio.h>

main()
{
    int np=10;
    char y;
// y=k no problem
// y=r cases are too high
/*    if(np>1000)
    {
        y='r';
    }
    else 
    {
        y='k';
    }
*/ 

  y=(np>1000)? 'r':'k';  
    
    printf("value of y is: %c\n",y );

}
