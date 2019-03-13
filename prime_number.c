#include<stdio.h>
void main()
{

    int no,ans,i;
    printf("Enter   a number ");
    scanf("%d",&no);
    for(i=2;i<=(no/2);i++)
    {
        if(no%i==0)
        {
            printf("\n%d not a prime number",no);
        }
        else{
            printf("%d a prime number ",no);
        }
    }
}
