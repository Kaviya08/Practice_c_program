#include<stdio.h>
void main()
{
int num,i,remainder,temp,reverse=0;
printf("enter the number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
remainder=num%10;
reverse=reverse*10+remainder;
temp=temp/10;
}
if(reverse==num)
{
    printf("%d is palindrome",num);
}
else{
    printf("%d is not a palindrome",num);
}
}
