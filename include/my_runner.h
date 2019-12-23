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

typedef struct running_scene {

    
} running_scene ;

typedef struct game_core {
    running_scene running_scene;
} game_core ;

#endif