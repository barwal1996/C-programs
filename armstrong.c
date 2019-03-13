/*armstrong number= sum of the cube of its digits is equal to that number are known as Armstrong numbers. For example 153 since 1^3 + 5^3 + 3^3 = 1+ 125 + 9 =153*/
#include<stdio.h>
 int main()
 {
    int num,r,sum=0,temp;

    printf("Enter a number: ");
    scanf("%d",&num);

    temp=num;
    while(num!=0){
         r=num%10;
         num=num/10;
         sum=sum+(r*r*r);
    }
    if(sum==temp)
         printf("%d is an Armstrong number",temp);
    else
         printf("%d is not an Armstrong number",temp);

    return 0;
}
