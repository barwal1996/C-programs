//Add two numbers in c without using operator
#include<stdio.h>
void main()
{

    int a,b;
    int i,sum;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);

    sum = a - ~b -1 ;
    printf("the sum is %d \n",sum);

}
