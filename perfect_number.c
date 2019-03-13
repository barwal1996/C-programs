#include<stdio.h>
void main()
{

    int i, n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);

    for(i=min;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            sum=sum+i;

        }
    }
        if(sum == n)
        {
            printf("the number is perfect number ",n);
        }
        else
        {
            printf("The number is not perfect number ",n);
        }

}
