#include<stdio.h>

void main()
{
    long pop=1441981744;
    float pw = 48.4;
    float pm = 51.6;
    float lro= 85.95;
    float lrm=80.95;
    float lrw=62.84;
    float ilm,ilw;
    float men=0,women=0;

    men=(pop*51.6)/100;
    printf("The total number of men is : %f",men);
    women=(pop*48.4)/100;
    printf("The total number of women is : %f",women);
    printf("The literacy of men is : %f%",lrm);
    printf("The literacy of women is : %f%",lrw);
}
