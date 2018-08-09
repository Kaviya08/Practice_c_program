#include<stdio.h>
int fibonacci();
void main()
{
    int i,f=0,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d",fibonacci(f));
        f++;
    }
    return ;
}
int fibonacci(f)
{
    if(f==0)
    {
        return 0;
    }
     else if(f==1)
    {
        return 1;
    }
    else
    {
        return fibonacci(f-1)+fibonacci(f-2);
    }
}
