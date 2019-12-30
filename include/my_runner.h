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

enum player_state {
    RUNNING,
    JUMPING,
    CROUCHING,
    HIT,
    DEAD
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
    sfSprite *sprite;
    sfTexture *texture;
    float x;
    float y;
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
    parallax parallax;
} running_scene ;

typedef struct game_core {
    running_scene running_scene;
} game_core ;

void aji_game_core(game_core *);
void aji_running_scene(running_scene *);
void aji_parallax(parallax *);
void aji_first_layer(parallax_layer *);
void aji_second_layer(parallax_layer *);
void aji_third_layer(parallax_layer *);
void aji_fourth_layer(parallax_layer *);
void aji_fifth_layer(parallax_layer *);
void aji_sixth_layer(parallax_layer *);
void aju_game_core(game_core *);
void aju_running_scene(running_scene *);

#endif