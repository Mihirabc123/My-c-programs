#include<stdio.h>
#define SQUARE(n) n*n;
int main()
{
 int s, pro;
 printf("Enter the number to be squared: ");
 scanf("%d",&s);
 pro = SQUARE(s);
 printf("\nThe squared number is %d\n", pro);
 return 0;
}
