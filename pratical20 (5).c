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
    if(Bmi<18.5)
    {
        printf("You are underweight : ");
    }
    else if(Bmi<24.9)
    {

        printf("You are normal weight : ");
    }
    else if(Bmi<29.9)
    {
        printf("You are Overweight : ");
    }
    else
    {
        printf("You are obese : ");
    }


}
