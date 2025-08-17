
#include<stdio.h>
void main()
{
    long pop=1441981744;
    float pw = 48.4;
    float pm = 51.6;
    float lro= 85.95;
    float lrm=80.95;
    float lrw=62.84;
    float ilm,ilw,lm,lw,total;
    float men=0,women=0,gap=0;
    men=(pop*51.6)/100;
    lm=(men*80.95)/100;
    printf("The total number of men is : %f",men);
    women=(pop*48.4)/100;
    lw=(women*62.84)/100;
    total=lm+lw;
    gap=lm-lw;
    printf("\n The total number of women is : %f",women);
    printf("\n The literacy of men in percentage : %f ",lrm);
    printf("\n The literacy of women in percentage : %f ",lrw);
    printf("\n The literacy men in the population : %f",lm);
    printf("\n The literacy women in the population : %f",lw);
    printf("\n The total literacy gap between  men and woman in the population : %f",gap);
    printf(" \n literacy of men in percantage    literacy of women in percentage");
    printf("\n %f                        %f",lrm,lrw);
    printf(" \n literacy of men in the population    literacy of women in the population");
    printf("\n %f                           %f",lm,lw);
    printf("\n The total literacy of men and woman in the population : %f",total);

}




