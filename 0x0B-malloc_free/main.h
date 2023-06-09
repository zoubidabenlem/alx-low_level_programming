#ifndef _MAIN_H_
#define _MAIN_H_
/**
 * create_array creates an array
 * c : char to initialize with
 * size : size of the array
 * return :c char value
*/
char *create_array(unsigned int size, char c);
#include "main.h"
/**
 * _strdup makes a copy of a string
 * str : string to duplicate
 * return :pointer to duplicate
*/
char *_strdup(char *str);
/**
 * str_concat - concats strings
 * @s1: string one to concat
 * @s2: string 2 to concat
 * Return: returns a concated string
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - creates 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer of double array
 */
int **alloc_grid(int width, int height);
/**
 * free_grid  - frees up a grid
 * @grid: grid to check
 * @height: height of grid
 */
void free_grid(int **grid, int height);
#endif
