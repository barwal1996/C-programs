//largest number between the 3 number
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if((a-b)>0 && (a-c)>0)
    {
        printf(" a is largest among them  %d",a);
    }
    else if ((b-c)>0)
    {
        printf("  b is largest among them %d",b);

    }
    else
    {
        printf(" c is largest %d",c);
    }
}
