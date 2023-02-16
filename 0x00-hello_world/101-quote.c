#include <stdio.h>

/**
 * main - program entry point
 *
 * Description - prints text without puts or prinf
 *
 * Return: 1 (success)
*/

int main(void)
{
   static const char text[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
   fwrite(text, sizeof(text) - 1, 1, stdout); 
   return (1);
}
