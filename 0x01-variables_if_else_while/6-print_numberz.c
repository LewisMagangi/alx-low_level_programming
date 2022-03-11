#include <stdio.h>
#include <ctype.h>
int main(void)
{
int a;
for (a = 'a'; a <= 'j'; a++)
{
putchar(a);
}
if (a == 'j')
{
putchar('\n')
}
return (0);
}
