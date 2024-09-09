/*
** EPITECH PROJECT, 2019
** initialize
** File description:
** dzad
*/

#include "my.h"
win ini_win(void)
{
    win var;
    sfVideoMode mode = { 1280, 720, 32 };

    var.window = sfRenderWindow_create(mode, "Duck Hunt eco+" , sfClose,
                                       NULL);
    var.rect = set_rect(var.rect);
    return (var);
}
sounds ini_sounds(void)
{
    sounds son;

    son.shot = sfSound_create();
    son.bg = sfSound_create();
    son.gunshot = sfSoundBuffer_createFromFile("shot.wav");
    son.background = sfSoundBuffer_createFromFile("bg.wav");
    sfSound_setBuffer(son.shot, son.gunshot);
    sfSound_setBuffer(son.bg, son.background);
    sfSound_setLoop(son.bg, sfTrue);
    sfSound_play(son.bg);     
    return (son);   
}
textu ini_textu(void)
{
    textu var2;

    var2.texturebg = sfTexture_createFromFile("bg.png", NULL);
    var2.spritebg = sfSprite_create();
    var2.texture1 = sfTexture_createFromFile("sprite.png", NULL);
    var2.sprite1 = sfSprite_create();
    return (var2);
}
