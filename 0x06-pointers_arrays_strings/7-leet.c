#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to be coded
 * Return: str
 */
char *leet(char *str)
{
int i;
int j;
char *a = "aAeEoOtTlL";
char *b = "443300771133";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; a[j] != '\0'; j++)
{
if (str[i] == a[j])
str[i] = b[j];
}
}
return (str);
}
