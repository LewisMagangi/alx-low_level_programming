#include <stdio.h>
#include <ctype.h>
int main(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'e')
a++;
else if (a == 'q')
a++;
else if (a == 'z')
putchar('\n');
putchar(a);
}
return (0);
}
