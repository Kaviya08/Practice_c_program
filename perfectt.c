#include<stdio.h>
void main()
{
int num,sum=0,rem,i;
printf("enter the number:");
scanf("%d",&num);

for(i=1;i<=num-1;i++)
{
rem=num%i;
if(rem==0)
{
sum+=i;
}
}
if(sum==num)
{
printf("%d is a perfect number",num);
}
else
{
printf("%d is not a perfect number",num);
}
}
