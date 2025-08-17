#include<stdio.h>
void main()
{

    float m;
    printf("Enter the marks of the student : ");
    scanf("%f",&m);
    if(m>=0 && m<=100)
    {
    if(m>=90)
    {

        printf("GPA=4.0");
    }
    else if(m>=80)
    {

        printf("GPA=3.0");
    }
    else if(m>=70)
    {
        printf("GPA =2.0");
    }
    else if(m>=60)
    {
        printf("Grade D");
            printf("GPA=1.0");
    }
    else
    {
            printf("Grade E");
            printf("GPA=0.0");
    }
    }
    else{
        printf("Invalid input...");
    }
}
