/*
 * File: _atoi.c
 * Auth: Elvis Ezekiel Ogbeda
 */

#include "shell.h"

/**
 * interactive - returns true if shell is interactive mode
 * @info: struct address
 *
 * Return: 1 if interactive mode, 0 otherwise
 */
int interactive(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @chk: the char to check
 * @delim: the delimeter string
 * Return: 1 if true, 0 if false
 */
int is_delim(char chk, char *delim)
{
while (*delim)
if (*delim++ == chk)
return (1);
return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @ck: The character to input
 * Return: 1 if ck is alphabetic, 0 otherwise
 */

int _isalpha(int ck)
{
if ((ck >= 'a' && ck <= 'z') || (ck >= 'A' && ck <= 'Z'))
return (1);
else
return (0);
}

/**
 * _atoi - converts a string to an integer
 * @st: the string to be converted
 * Return: 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *st)
{
int i, sign = 1, flag = 0, output;
unsigned int result = 0;

for (i = 0; st[i] != '\0' && flag != 2; i++)
{
if (st[i] == '-')
sign *= -1;

if (st[i] >= '0' && st[i] <= '9')
{
flag = 1;
result *= 10;
result += (st[i] - '0');
}
else if (flag == 1)
flag = 2;
}

if (sign == -1)
output = -result;
else
output = result;

return (output);
}
