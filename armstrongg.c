#include<stdio.h>
main()
{
int num,remainder,temp;
int sum=0;
printf("enter the number:");
scanf("%d",&num);
temp=num;
while(num!=0)
{
remainder=num%10;
sum+=remainder*remainder*remainder;
num/=10;
}
num=temp;
if(sum==num)
{
    printf("%d is an armstrong number",num);
}
else
{
    printf("%d is not an armstrong number",num);
}

}


