#include <stdio.h>

int main()
{
 int i,r,p,si,count;
 for(count = 1; count <= 3; count++)
 {
  printf("Enter the p, r, i: ");
  scanf("%d %d %d", &p, &r, &i);
  si = p * r * i / 100;
  printf("Here's the simple interest %d..\n", si);
 }
 return 0;
}
