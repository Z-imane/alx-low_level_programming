#include "main.h"
/**
 * _isalpha - checks for alphabetic characte
 * @c: the character to be checked
 * Return: 1 for alphabetic character or 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 128))
{
return (1);
}
return (0);
}
