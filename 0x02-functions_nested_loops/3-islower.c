#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: the character to be checked
 * Return: 1 for lowecase character or 0 otherwise
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
