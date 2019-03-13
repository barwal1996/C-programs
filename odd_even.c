//odd_even
#include<stdio.h>
void main()
{

    int min,max,num;


    printf("Enter the minimum range of number");
    scanf("%d ",&min);

     printf("Enter the maximum range of number");
    scanf("%d ",&max);

    printf("the odd numbers in range are ");
    for(num=min;num<=max;num++)
        if((num%2)!=0)
        printf("%d ",num);


}
