#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main(void)
{
int a;
int b;
for (a = 'a'; a <= 'z'; a++)
{
putchar(a);
}
for (b = 'A'; b <= '['; b++)
{
if (b == '[')
{
putchar('\n');
}
putchar(a);
}
return (0);
}
