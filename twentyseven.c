#include <stdio.h>

int resum(int x);

int main()
{
 int num, sum;
 printf("Enter the five digit number: ");
 scanf("%d", &num);
 sum = resum(num);
 printf("\nThe sum is %d\n",sum);
 return 0;
}

int resum(int x)
{
 int remainder, y;
 if(x==0)
  return 0;
 else
  remainder = x % 10;
  y = remainder + resum(x/10);
 return y;
}
