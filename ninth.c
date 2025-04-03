#include <stdio.h>

int main()
{
 int x,y;
 printf("\nEnter the value of x: ");
 scanf("%d", &x);
 y = ( x > 10 ? 20 : 5 );
 printf("\nThe value of x and y is %d and %d\n", x, y);
 return 0;
}
