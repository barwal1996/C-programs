#include<stdio.h>

void main()
{
    char str[20];

    printf("Enter the string");

    gets(str);

  if(isPalindrome(str))
    printf("palindrome ");
  else
    printf("Not a palindrome ");


}
int isPalindrome(char str[])
{
int l,i;
      l=strlen(str);
    for(i=0;i<l/2;i++)
    {
        if(str[i]!=str[l-i-1])
                return(0);
}
return(1);
}

