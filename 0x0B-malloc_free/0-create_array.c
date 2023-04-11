#include "main.h"
/**
 * create_array creates an array
 * c : char to initialize with
 * size : size of the array
 * return :c char value
*/
char *create_array(unsigned int size, char c){
    char *s;
    unsigned int i = 0;
    if (size == 0){
        return NULL;
    }
    s= malloc (size * sizeof(char))
    if (s == NULL){
        return NULL;
    }
    while(i < size){
        s[i] = c;
        i++;
    }
    return s
}
