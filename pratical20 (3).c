#include<stdio.h>
void main()
{
    float height,weight,Bmi;

    printf("Enter the weight of the person in kilograms :  ");
    scanf("%f",&weight);
    printf("Enter the height of the person in meters : ");
    scanf("%f",&height);
    if(weight>0 && height>0)
    {
        Bmi=weight/(height*height);
        printf("The BMI of the person is : %.2f",Bmi);
    }
    else
    {
        printf("please enter the correct value.");
    }



}
