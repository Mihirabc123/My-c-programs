#include <stdio.h>

int main()
{
 int m1, m2, m3, m4, m5, t;
 float per;
 printf("\nEnter the marks: ");
 scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
 t = m1 + m2 + m3 + m4 + m5; 
 per = t * 100/ 125;
 printf("\nThe total marks obtained is %d", t);
 printf("\nThe pertange obtained is %f\n", per);
 return 0;
}
