/*
** EPITECH PROJECT, 2019
** window
** File description:
** 
*/
#include "my.h"
void check_pos(sfVector2f *position, sfIntRect *rect, int speed)
{
    position->x = position->x + speed;
    if (position->x >= 1280) {
        rect->top = 110;
    }
    if (position->x <= -200) {
        rect->top = 0;
    }
}
void display(win var, textu var2, sfVector2f position)
{
    sfSprite_setTexture(var2.spritebg, var2.texturebg, sfTrue);
    sfSprite_setTexture(var2.sprite1, var2.texture1, sfTrue);
    sfSprite_setTextureRect(var2.sprite1, var.rect);
    sfSprite_setPosition(var2.sprite1, position);
    sfRenderWindow_drawSprite(var.window, var2.spritebg, NULL);
    sfRenderWindow_drawSprite(var.window, var2.sprite1, NULL);
    sfRenderWindow_display(var.window);
}
sfVector2f game(win var,textu var2, sfVector2f position, sounds yolo)
{
    sfEvent event;

    analyse_events(var.window, event, &position, yolo);
    return(position);
}

void analyse_events(sfRenderWindow *window, sfEvent event, sfVector2f *position,
                    sounds yolo)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtClosed){
            end_sounds(yolo);
            sfRenderWindow_close(window);
        }
        if (event.type == sfEvtMouseButtonPressed){
            sfSound_play(yolo.shot);
            manage_mouse_click(event.mouseButton, position, window, yolo);
        }
    }
}

void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
sfRenderWindow *window, sounds yolo)
{
    int new_pos;

    if (event.x >= position->x && event.x <= position->x + 110 &&
        event.y >= position->y && event.y <= position->y + 110) {
        new_pos = hit();
        position->x = -100;
        position->y = new_pos;
    } else if((life > 0)) {
        miss();
	}
    if (life == 0) {
        game_over();
        end_sounds(yolo);
        sfRenderWindow_close(window);
    }
}