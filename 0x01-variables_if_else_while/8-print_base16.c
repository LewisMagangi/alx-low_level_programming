#include <stdio.h>
#include <ctype.h>
int main(void)
{
int a;
char c;
for (a = '0'; a <= '9'; a++)
putchar(a);
for (c = 'a'; c <= 'g'; c++)
{
if (c < 'g')
{
putchar(c);
}
else if (c == 'g')
{
putchar('\n');
}
}
return (0);
}
