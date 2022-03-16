#include "main.h"
int _isalpha(int c);

int _isalpha(int c)
{
int c;

if (c >= '65' && c <= '90' || c >= '97' && c <= '122')
{
return (1);
}
else
{
return (0);
}
}
