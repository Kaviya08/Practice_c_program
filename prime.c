#include<stdio.h>
void main()
{
int num,i,flag;
printf("Enter a number:");
scanf("%d",&num);
if(num==1)
{
printf("Neither prime nor composite");
}
flag=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
flag=1;
}
if(flag==0)
{
printf("%d is a prime number",num);
}
else
{
printf("%d is not a prime number",num);
}}
