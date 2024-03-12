#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: null on failure, otherwise concatenated string
 */
char *str_concat(char *s1, char *s2)
{
int len_s1, len_s2;
char *result;
int i, j;
    if (s1 == NULL || s2 == NULL) {
        return (NULL);
    }
    len_s1 = 0;
    while (s1[len_s1] != '\0') {
        len_s1++;
    }
    len_s2 = 0;
    while (s2[len_s2] != '\0') {
        len_s2++;
    }
result = (char *)malloc((len_s1 + len_s2 + 1) * (sizeof(char)));
    if (result == NULL) {
        return NULL;
    }
    for (i = 0; i < len_s1; i++) {
        result[i] = s1[i];
    }
    for (j = 0; j < len_s2; j++) {
        result[i + j] = s2[j];
    }
    result[i + j] = '\0';

    return (result);
}
