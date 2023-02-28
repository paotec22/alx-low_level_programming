#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main()
{
   char n;

   for (n = 97; n <= 122;n++)
   {
      putchar(n);
   }
   putchar('\n');
   return 0;
}
