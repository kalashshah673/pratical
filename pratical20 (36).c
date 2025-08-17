#include<stdio.h>
void main()
{

    float m;
    int i,name;
    printf("\n Enter the number of the students :");
    scanf("%d",&name);
    for(i=1;i<=name;i++)
    {
        printf("\n Enter the marks of the student : ");
        scanf("%f",&m);
    if(m>=0 && m<=100)
    {
    if(m>=90 && m<=100)
    {
        printf("\n Grade A");
        printf("\n GPA=4.0");
        printf("\n Excellent...");
    }
    else if(m>=80 && m<90)
    {
        printf("\n Grade B");
        printf("\n GPA=3.0");
        printf("\n Very Good...");
    }
    else if(m>=70 && m<80)
    {
        printf("\n Grade C");
        printf("\n GPA =2.0");
        printf("\n Good...");
    }
    else if(m>=60 && m<70)
    {
            printf("\n Grade D");
            printf("\n GPA=1.0");
            printf("\n Needs improvement..");
    }
    else
    {
            printf("\n Grade E");
            printf("\n GPA=0.0");
            printf("\n Need to work hard and to take drawback for better understanding...");
    }
    }

    else{
        printf("\n Invalid input...");
    }
    }
}

