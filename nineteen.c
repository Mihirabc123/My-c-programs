#include <stdio.h>

int main()
{
 int i;
 printf("Enter a number from 0-9 :");
 scanf("%d", &i);
 switch(i)
 {
  case 1:
   printf("\nThe number is 1\n");
   break;
    case 2:
   printf("\nThe number is 2\n");
   break;
  case 3:
   printf("\nThe number is 3\n");
   break;
  case 4:
   printf("\nThe number is 4\n");
   break;
  case 5:
   printf("\nThe number is 5\n");
   break;
  case 6:
   printf("\nThe number is 6\n");
   break;
  case 7:
   printf("\nThe number is 7\n");
   break;
  case 8:
   printf("\nThe number is 8\n");
   break;
  case 9:
   printf("\nThe number is 9\n");
   break;
  case 0:
   printf("\nThe number is 0\n");
   break;
  default:
   printf("\nThe number is not in range..\n");
 }
 return 0;
}
