/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** bootstrap printf
*/
#include <unistd.h>
void my_putchar(char c)
{
    write(1, &c, 1);
}