#include<stdio.h>
void main()
{

    float m;
    printf("Enter the marks of the student : ");
    scanf("%f",&m);
    if(m>=0 && m<=100)
    {
        (m>=90)?printf("grade A"):(m>=80)?printf("grade B"):(m>=70)?printf("grade C"):(m>=60)?printf("grade D"):printf("grade F");
    }
    else
    {
        printf("Invalid input....");
    }

}
