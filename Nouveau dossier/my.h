/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** dzad
*/


#include <stddef.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "stdarg.h"
typedef struct var1 {
    sfRenderWindow *window;
    sfVector2f position;
    sfIntRect rect;
} win;

typedef struct var2 {
    sfTexture *texturebg;
    sfSprite *spritebg;
    sfTexture *texture1;
    sfSprite *sprite1;
} textu;

typedef struct son {
    sfSound *shot;
    sfSound *bg;
    sfSoundBuffer *gunshot;
    sfSoundBuffer *background;
} sounds;

typedef struct horloge {
    sfClock *clock;
    sfTime time;
    float seconds;
} clock;

int score;
int life;
int speed;
win ini_win(void);
void hey_listen(void);
win ini_win(void);
sounds ini_sounds(void);
textu ini_textu(void);
sfVector2f game(win var,textu var2, sfVector2f position, sounds yolo);
void analyse_events(sfRenderWindow *window, sfEvent event,
                    sfVector2f *position, sounds yolo);
void manage_mouse_click(sfMouseButtonEvent event, sfVector2f *position,
                        sfRenderWindow *window, sounds yolo);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect set_rect(sfIntRect rect);
void check_pos(sfVector2f *position, sfIntRect *rect, int i);
sfVector2f set_pos(sfVector2f position);
int my_hunter(win var,textu var2, sfVector2f position);
void my_putchar(char c);
void end_sounds(sounds yolo);
char *my_strcpy(char *dest, char const *src);
int my_put_nbr(int nb);
int my_putstr(char const *str);
void game_over(void);
int my_strlen(char const *str);
int  hit(void);
void miss(void);
char *my_strcpy(char *dest, char const *src);
char* my_strdup(const char* str);

