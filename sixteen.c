#include <stdio.h>

int main()
{
 int r, c, sum;
 for(r=1;r<=20;r++)
 {
   for(c=1;c<=20;c++)
   {
    sum = r + c;
    printf("r = %d c = %d sum = %d\n",r,c,sum);
   }
 }
 return 0;
}

