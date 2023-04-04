#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * _memset - set memory to a character
 * @s: value and pointer
 * @b: value to replace at pointers
 * @n: n amount of times to replace
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * _memcpy - copies value from src to dest
 * @dest: destination to copy
 * @src: source to copy from
 * @n: amount of times from 0 to copy
 * Return: return string char value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _strchr - locates character in string
 * @s: string to find character
 * @c: character to find
 * Return: found character
 */
char *_strchr(char *s, char c);
/**
 * _strspan  - length of previx substring
 * @s: string to go through
 * @accept: accept bytes
 * Return: returns usigned int value
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strpbrk - search string for all chars
 * @s: string to search
 * @accept: accepting string
 * Return: return those letters only
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strstr - locates substring
 * @haystack: string to locate substring
 * @needle: string to locate
 * Return: return string found
 */
char *_strstr(char *haystack, char *needle);
/**
 * print_chessboard - prints board
 * @a: prints a characters
 *
 */
void print_chessboard(char (*a)[8]);
/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
#endif
