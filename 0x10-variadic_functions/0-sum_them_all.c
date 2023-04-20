#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all: functions that sums arguments
 * @n: argument to sum
 * return: sum of arguments
*/
int sum_them_all(const unsigned int n, ...) {
    int sum = 0;

    if (n == 0) {
        return sum;
    }

    va_list args;
    va_start(args, n);

    unsigned int i;
    for (i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}
