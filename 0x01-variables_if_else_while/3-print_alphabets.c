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
for (b = 'A'; b <= 'Z'; b++)
{
putchar(b);
}
if (b == 'Z')
{
putchar('\n');
}
return (0);
}
