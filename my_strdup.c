/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** dzadza
*/
#include "my.h"
#include <stdlib.h>
char* my_strdup(const char* str)
{
    int len;
    char* dup;

    len = my_strlen(str) + 1;
    dup = malloc(len);
    if(dup == NULL){
        return (0);
    }
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
