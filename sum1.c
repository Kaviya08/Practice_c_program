#include<stdio.h>
main()
{
int num,remainder;
int sum=0;
printf("enter the number:");
scanf("%d",&num);
while(num!=0)
{
remainder=num%10;
sum+=remainder;
num/=10;
}
printf("Sum of digits is %d",sum);
return 0;
}
