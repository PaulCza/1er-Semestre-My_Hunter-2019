/*
** EPITECH PROJECT, 2019
** rect
** File description:
** 
*/


#include <stddef.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include "my.h"
#include <stdlib.h>
void move_rect(sfIntRect *rect, int offset, int max_value)
{
    rect->left += offset;
    if (rect->left == max_value)
        rect->left = 0;
}

sfIntRect set_rect(sfIntRect rect)
{
    rect.top = 0;
    rect.left = 0;
    rect.width = 110;
    rect.height = 110;
    return (rect);
}
