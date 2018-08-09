#include<stdio.h>
#include<math.h>
int main()
{
    int choice,a,b,c,base,power,num,n;
    printf("1.add\n2.subtract\n3.multiply\n4.divide\n5.modulo\n6.square root\n7.power");
    do
    {
    printf("\nenter a choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("enter two numbers:");
            scanf("%d %d",&a,&b);
            c=a+b;
            printf("addition is %d",c);
            break;
        case 2:
            printf("enter two numbers:");
            scanf("%d %d",&a,&b);
            printf("subtraction is %d",c=a-b);
            break;
        case 3:
            printf("enter two numbers:");
            scanf("%d %d",&a,&b);
            printf("product is %d",c=a*b);
            break;
        case 4:
            printf("enter two numbers:");
            scanf("%d %d",&a,&b);
            printf("division is %d",c=a/b);
            break;
        case 5:
            printf("enter two numbers:");
            scanf("%d %d",&a,&b);
            printf("modulo is %d",c=a%b);
            break;
        case 6:
            printf("enter the num:");
            scanf("%d",&num);
            c=sqrt(num);
            printf("sqrt is %d",c);
            break;
        case 7:
            printf("enter the base:");
            scanf("%d",&base);
            printf("enter the power:");
            scanf("%d",&power);
            c=pow(base,power);
            printf("power is %d",c);
            break;
            }
}while(choice<8);
return 0;



}
