#include<stdio.h>



void main()
{
    float length,breadth,area,perimeter;

    printf("Enter the length of the reactangle : ");
    scanf("%f",&length);

    printf("Enter the breadth of the reactangle : ");
    scanf("%f",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("The area of rectangle is :%.2f ",area);
    printf("\n The perimeter of rectangle is : %.2f",perimeter);

}
