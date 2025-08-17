#include<stdio.h>
void main()
{
    float far,cel,kel;
    int i,a;
    printf("\n If you want the converstions from celius to fahrenhit enter 1");
    printf("\n If you want the converstions from fahrenhit to celsius enter 0");
    printf("\n If you want the converstions from celius to kelvin enter 2");
    printf("\n If you want the converstions from kelvin to celsius enter 3");
    printf("\n If you want the converstions from kelvin to fahrenhit enter 4");
    printf("\n If you want the converstions from fahrenhit to kelvin enter 5");
    scanf("%d",&i);
    printf("\n Converting the range of celsius values form -20 to 100 :");
    for(a=-20;a<=100;a++)
    {
            far=(a*1.8)+32;
            kel=a+273.15;
            printf("%.2f",far);
            printf("   %.2f",kel);
            printf("\n");
    }
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
    if(i==2)
    {
        printf("Enter the temperature in  celsius : ");
        scanf("%f",&cel);
        kel=cel+273.15;
        printf("The temperature in kelvin is  : %f",kel);
    }
    if(i==4)
    {
        printf("Enter the temperature in  kelvin : ");
        scanf("%f",&kel);
        far=(kel - 273.15)*9/5+32;
        printf("The temperature in fahrenhit is  : %f",far);
    }
    if(i==3)
    {
        printf("Enter the temperature in  kelvin : ");
        scanf("%f",&kel);
        cel=kel-273.15;
        printf("The temperature in celsius is  : %f",cel);
    }
    if(i==5)
    {
        printf("Enter the temperature in  fahrenhit : ");
        scanf("%f",&far);
        kel=(far - 32)*5/9+273.15;
        printf("The temperature in kelvin is : %f",kel);
    }
}
