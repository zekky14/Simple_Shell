/*
 * File: _atoi.c
 * Auth: Elvis Ezekiel Ogbeda
 */

#include <shell.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *msg = "Hi, Betty!\n";
int len = 14;

write(STDOUT_FILENO, msg, len);
return (0);
}
