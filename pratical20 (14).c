#include<stdio.h>

void main()
{
    float far,cel;

    printf("Enter the temperature in Celius : ");
    scanf("%f",&cel);

    far=(cel*1.8)+32;
    printf("The temperature is converted into fahrenhit : %.2f",far);

}
