#include<stdio.h>
void main()
{
    float length,breadth,area,perimeter;
    int i,parks;
    printf("Enter total how many multiple parks you want : ");
    scanf("%d",&parks);
    printf("Enter the dimensions of rectangle in positive only");
    for(i=1;i<=parks;i++)
    {


    printf("Enter the length of the reactangle : %d",i);
    scanf("%f",&length);

    printf("Enter the breadth of the reactangle : %d",i);
    scanf("%f",&breadth);

    area=length*breadth;
    perimeter=2*(length+breadth);

    printf("The area of rectangle is :%.2f ",area);
    printf("\n The perimeter of rectangle is : %.2f",perimeter);
    }
}
