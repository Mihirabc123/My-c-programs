#include<stdio.h>

int sum(int x, int y, int z);

int main()
{
 int a,b,c, sum2;
 printf("\nEnter the three numbers: ");
 scanf("%d %d %d", &a, &b, &c);
 sum2 = sum(a,b,c);
 printf("\nThe sum of three numbers is %d\n", sum2);
 return 0;
}

int sum(int x, int y, int z)
{
 int sum;
 sum = x+y+z;
 return(sum);
}
