#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * malloc_checked - checks malloc?
 * @b: int to check? something
 * Return: something void or pointer
 */
void *malloc_checked(unsigned int b);
/**
 * string_nconcat - concats strings
 * @s1: string one
 * @s2: string two
 * @n: n amount of bytes of s2
 * Return: a char pointer value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif
