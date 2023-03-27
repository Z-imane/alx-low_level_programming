#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length of str
 */
size_t _strlen(const char *str)
{
size_t len = 0;
while (*str++)
len++;
return (len);
}
