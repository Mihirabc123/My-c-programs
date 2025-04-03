#include<stdio.h>

int main()
{
 int qua, dis;
 float rate, exp;
 printf("\nEnter the quantity and rate:");
 scanf("%d %f", &qua, &rate);
 if(qua > 1000)
  dis = 10;
 else
  dis = 0;
 exp = (qua * rate) - (qua * rate * dis / 100);
 printf("\nThe total expenditure is %f\n", exp);
 return 0;
}
