#include<stdio.h>

void main()
{
    float far,cel;
    int i;
    printf("\n If you want the converstions from celius to fahrenhit enter 1");
    printf("\n If you want the converstions from fahrenhit to celsius enter 0");
    scanf("%d",&i);
    if(i==1)
    {
    printf("Enter the temperature in Celius : ");
    scanf("%f",&cel);
    far=(cel*1.8)+32;
    printf("The temperature is converted into fahrenhit : %.2f",far);
    }
    if(i==0)
    {
    printf("Enter the temperature in Farhenhit : ");
    scanf("%f",&far);
    cel=(far-32)*5/9;
    printf("The temperature is converted into celsius : %.2f",cel);
    }
}
