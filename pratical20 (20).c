#include<stdio.h>
void main()
{
const int tick=150;
 int p,age,i,sum=0,c=0;

 printf("Enter total number of people : ");
 scanf("%d",&p);

 for(i=1;i<=p;i++)
 {
    printf("Enter your age %d ",i);
    scanf("%d",&age);
    if(age>17 && age<=59)
    {
        c++;

    }
    if(age<=12)
    {
        printf("Free entry enjoy ..");
         sum=0;
         printf("\n ticket price is %d",sum);
    }
    else if(age<=17)
    {
        sum=sum+tick;
        printf("\n ticket price is %d : ",sum);
    }
    else if(age<=59)
    {
        sum=sum+tick;
        printf("\n ticket price is %d : ",sum);
    }
    else
    {

        printf("\n ticket price is free enjoy");
    }
 }
    printf("\n Number of adults in the group is  %d",c);
    if(c>=5)
      {
        sum =sum-(tick*0.1);
        printf("Your ticket price is %d",sum);

      }
}
