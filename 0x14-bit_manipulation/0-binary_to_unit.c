
Caxri7
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
alx-low_level_programming/0x14-bit_manipulation/0-binary_to_uint.c
@Caxri7
Caxri7 Bit manipulation
 1 contributor
Executable File  30 lines (26 sloc)  404 Bytes
#include "main.h"

/**
* binary_to_uint - is function that converts binary to an unsigned int.
* @b: is a constant char
*
* Return: returns the converted number else 0.
**/

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int n = 0;

if (!b)
return (0);

for (i = 0; b[i] != '\0'; i++)
{
n <<= 1;
if (b[i] == '1')
n += 1;
else
{
if (b[i] != '0' && b[i] != '1')
return (0);
}
}
return (n);
}
