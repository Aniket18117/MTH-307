#include<stdio.h>

main()
{
int marks=60;
switch(marks>60)
{
    case 1: {
        printf("first class\n");
        break;
        
    }
    case 0: {
            printf("second class\n");
    }
}
printf("I am out of switch now\n");
}
