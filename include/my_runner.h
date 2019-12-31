/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** my_runner
*/

#ifndef MY_RUNNER_H_
#define MY_RUNNER_H_

#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Graphics.h>

#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

enum player_state {
    RUNNING,
    JUMPING,
    FALLING,
    CROUCHING,
    HIT,
    DEAD
} ;

enum game_state {
    INGAME,
    MENU
} ;

typedef struct player {
    sfSprite *sprite;
    sfTexture *texture;
    sfSound *sound;
    sfVector2f pos;
    float speed;
    int state;
} player ;

typedef struct parallax_layer {
    sfSprite *sprite_one;
    sfSprite *sprite_two;
    sfTexture *texture;
    sfVector2f pos_one;
    sfVector2f pos_two;
    sfClock *move_clock;
} parallax_layer ;

typedef struct parallax {
    parallax_layer first_layer;
    parallax_layer second_layer;
    parallax_layer third_layer;
    parallax_layer fourth_layer;
    parallax_layer fifth_layer;
    parallax_layer sixth_layer;
} parallax ;

typedef struct running_scene {
    sfRenderWindow *window;
    sfEvent event;
    parallax parallax;
    int state;
} running_scene ;

typedef struct game_core {
    sfRenderWindow *window;
    int state;
    running_scene running_scene;
} game_core ;

void aji_game_core(game_core *, sfRenderWindow *);
void aji_running_scene(running_scene *, sfRenderWindow *);
void aji_parallax(parallax *);
void aji_first_layer(parallax_layer *);
void aji_second_layer(parallax_layer *);
void aji_third_layer(parallax_layer *);
void aji_fourth_layer(parallax_layer *);
void aji_fifth_layer(parallax_layer *);
void aji_sixth_layer(parallax_layer *);


void aju_game_core(game_core *);
void aju_running_scene(running_scene *);
void aju_running_scene_event(running_scene *);
void aju_parallax(parallax *);
void aju_first_layer(parallax_layer *);
void aju_second_layer(parallax_layer *);
void aju_third_layer(parallax_layer *);
void aju_fourth_layer(parallax_layer *);
void aju_fifth_layer(parallax_layer *);
void aju_sixth_layer(parallax_layer *);


void ajd_game_core(game_core *, sfRenderWindow *);
void ajd_running_scene(running_scene *);
void ajd_parallax(parallax *, sfRenderWindow *);

#endif