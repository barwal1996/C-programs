#include<stdio.h>
void main()
{

     int i,r,n,temp,rev=0;
     printf("enter a number ");
     scanf("%d",&n);
     temp=n;
     while(temp>0)
     {
         r=temp%10;
         rev= rev*10+r;
         temp=temp/10;
     }
     if(n==rev)
     {
         printf("%dThe number is palindrome",n);

     }
     else{
        printf("%dReverse of number is ",rev);
     }
}
