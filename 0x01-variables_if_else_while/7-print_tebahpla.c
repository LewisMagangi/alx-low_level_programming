#include <stdio.h>
#include <ctype.h>
int main(void)
{
int a;
for (a = 'z'; a >= 'a'; a--)
{
putchar(a);
}
if (a == 'a')
{
putchar('\n');
}
return (0);
}

