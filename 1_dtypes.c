#include<stdio.h>

main()
{
    int maths=90;
    int physics=90;
    int chemistry=80;
    int biology=70;
    int total = maths+physics+chemistry+biology;
    float percent = (total/400.0)*100.0;
    char grade= 'B';
    printf("Physics marks %d\n", physics);
    printf("Maths marks %d\n", maths);
    printf("Chemistry marks %d\n", chemistry);
    printf("Biology marks %d\n", biology);
    printf("Total marks %d\n", total);
    printf("Percentage %f\n", percent);
    printf("Grade %c\n", grade);
}
