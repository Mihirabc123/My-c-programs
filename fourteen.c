#include <stdio.h>

int main()
{
 int num, fact, i;
 fact = i = 1;
 printf("\nEnter the number: ");
 scanf("%d", &num);
 while(i<=num)
  {
   fact = fact * i;
   i++;
  }
 printf("\nThe factorial of %d is %d..\n",num, fact);
 return 0;
}
