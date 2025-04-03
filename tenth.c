#include <stdio.h>

int main()
{
 char ch;
 printf("\nEnter the character: ");
 scanf("%c", &ch);
 if(ch >= 65 && ch <= 90)
  printf("\nIt is an Uppercase letter...\n");
 if(ch >= 97 && ch <= 122)
  printf("\nIt is an lowercase letter..\n");
 if(ch >= 48 && ch <= 57)
  printf("\nIt is an number..\n");
 if((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
  printf("\nIt is an special character..\n");
 return 0;
}
