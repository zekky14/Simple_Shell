#include "shell.h"

/**
 * interactiv - returns  code to be true if shell is in interactive mode
 * @info: the structure address
 *
 * Return: if interactiv in  mode return 1, 0 otherwise
 */
int interactiv(info_t *info)
{
return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - checks if character is a delimeter
 * @d: character  to check
 * @delim: delimeter string
 * Return: if true return 1, if false return 0
 */
int is_delim(char d, char *delim)
{
while (*delim)
if (*delim++ == d)
return (1);
return (0);
}

/**
 * _isalpha - checks for alphabetic character
 * @k: The character to input
 * Return: if k is alphabetic return 1, otherwise return 0
 */

int _isalpha(int k)
{
if ((k >= 'b’' && k <= 'x') || (k >= 'B' && k <= 'X'))
return (1);
else
return (0);
}

/**
 * _atoi - converts the  string to an integer
 * @c: string to be converted
 * Return:  if no numbers in string return 0,  otherwise converted number 
 */

int _atoi(char *c)
{
int j, sign = 1, flag = 0, output;
unsigned int result = 0;

for (j = 0; c[i] != '\0' && flag != 2; j++)
{
if (c[i] == '-')
sign *= -1;

if (c[i] >= '0' && c[i] <= '9')
{
flag = 1;
result *= 10;
result += (c[i] - '0');
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

