#include <stdio.h>

int main()
{
 int bs, dr, hr, gp;
 printf("\nEnter the basic salary: ");
 scanf("%d", &bs);
 dr = bs * 0.4;
 hr = bs * 0.2;
 gp = bs + dr + hr;
 printf("\nThe dearness is %d", dr);
 printf("\nThe house rent is %d", hr);
 printf("\nThe gross expenditure is %d\n", gp);
 return 0;
}
