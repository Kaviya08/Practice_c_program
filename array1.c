#include<stdio.h>
void main()
{
    int array[100],array_size,i,sum=0;
    printf("enter a array_size:");
    scanf("%d",&array_size);
    printf("enter a array");
    for(i=0;i<array_size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<array_size;i++)
    {
        sum+=array[i];
    }
    printf("sum is%d",sum);

}
