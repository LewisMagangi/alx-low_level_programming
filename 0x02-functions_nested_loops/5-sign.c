#include "main.h"
int print_sign(int n);

int print_sign(int n)
{
int n;

if (n > 0)
{
printf('+');
return (1);
}
else if (n == 0);
{
printf('0');
return (1);
}
else 
{
printf('-');
return (-1);
}
}
