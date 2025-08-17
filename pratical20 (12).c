#include<stdio.h>
void main()
{
    long pop;
    float pw;
    float pm;
    float lro;
    float lrm;
    float lrw;
    float ilm,ilw,lm,lw,total;
    float men=0,women=0,gap=0;
     printf("Enter total number of population is : %ld ",pop);
     scanf("%ld",&pop);
     printf("Enter the population of women which is : %f",pw);
     scanf("%f",&pw);
    printf("Enter the population of men which is : %f",pm);
     scanf("%f",&pm);
     printf("Enter the literacy of men which is in percentage : %f",lrm);
     scanf("%f",&lrm);
    printf("Enter the literacy of women which is in percentage : %f",lrw);
     scanf("%f",&lrw);
    men=(pop*pm)/100;
    lm=(men*lrm)/100;
    printf("The total number of men is : %f",men);
    women=(pop*pw)/100;
    lw=(women*lrw)/100;
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




