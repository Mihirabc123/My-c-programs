#include <stdio.h>

int main()
{
 float bs, hra, da, gr;
 printf("Enter the basic salary: ");
 scanf("%f", &bs);
 if ( bs < 1500 )
{
  hra = bs * 10/100;
  da = bs * 90/100;
}
 else
{
  hra = 500;
  da = bs * 98/100;
}
 gr = bs + hra + da;
 printf("\nThe total gross salary is %f\n", gr);
 return 0;
}
