/*
** EPITECH PROJECT, 2019
** result.c
** File description:
** show result
*/

#include "my.h"
void game_over(void)
{
    my_putstr("Game over!\nYour final score is:");
    my_put_nbr(score);
    my_putchar('\n');
}
int  hit(void)
{
    int new;

    new = rand() % 400 + 5;
    score = score + 1;
    speed = speed + 1;
    my_putstr("Nice shot! Score = ");
    my_put_nbr(score);
    my_putchar('\n');
    return (new);
}
void miss(void)
{
    life = life - 1;
    my_putstr("Fail! Number of life: ");
    my_put_nbr(life);
    my_putchar('\n');
}
