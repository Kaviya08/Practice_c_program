#include<stdio.h>
void main()
{
   long int fact=1;
   int i,num;
    printf("enter a value");
    scanf("%d",&num);
    for(i=num;i>=1;i--)
    {
        fact*=i;
    }
    printf("factorial is %ld",fact);
}
