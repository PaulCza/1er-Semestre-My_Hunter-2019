/*
** EPITECH PROJECT, 2019
** window
** File description:
** 
*/
#ifndef MY_H
#include "my.h"
#endif

void hey_listen(void)
{
    my_putstr("my_hunter\n");
    my_putstr("The goal of the game is to kill as many birds as possible.");
    my_putstr("\nFor this you just have to left-click on the birds.\n");
}

void end_sounds(sounds yolo)
{
    sfSound_destroy(yolo.bg);
    sfSound_destroy(yolo.shot);
    sfSoundBuffer_destroy(yolo.gunshot);
    sfSoundBuffer_destroy(yolo.background);
}

sfVector2f ini_pos(sfVector2f position)
{
    position.x = -100;
    position.y = 100;
    return (position);
}
int my_hunter(win var,textu var2, sfVector2f position)
{
    clock clo;
    sounds yolo;

    score = 0;
    life = 5;
    speed = 5;
    yolo = ini_sounds();
    clo.clock = sfClock_create();        
    while (sfRenderWindow_isOpen(var.window)) {
        sfRenderWindow_clear(var.window, sfBlack);
        sfRenderWindow_setFramerateLimit(var.window, 60);
        clo.time = sfClock_getElapsedTime(clo.clock);
        clo.seconds = clo.time.microseconds / 100000.0;
        if (clo.seconds > 1.0) {
            move_rect(&var.rect, 110, 330);
            sfClock_restart(clo.clock);
        }
        check_pos(&position, &var.rect, speed);
        display(var, var2, position);
        position = game(var, var2, position, yolo);
    }
    return(0);
}
int main(int argc, char *argv[])
{
    win var;
    textu var2;
    sfIntRect rect;
    sfVector2f position;

    if (argc == 2){
        hey_listen();
        return (84);
    } else {
        position = ini_pos(position);
        var = ini_win();
        var2 = ini_textu();
        my_hunter(var, var2, position);
    }
    return (0);
}