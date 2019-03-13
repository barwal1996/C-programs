//generic root of a number .
#include<stdio.h>
void main()
{

    long int i,sum,r,num;
    printf("Enter the number ");
    scanf("%d",&num);

    while(num>10)
    {   sum=0;
        while(num)

        {
            r=num%10;
            num=num/10;
            sum+=r;

        }
        if(sum>10)
            num=sum;
        else
            break;
    }
    printf("the sum of digits of generic root is  %d ",sum);
}
