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
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdio.h>

enum player_state {
    IDLE,
    IDLETORUN,
    RUNNING,
    JUMPING,
    FALLING,
    CROUCH
} ;

enum enemy_type {
    BAT = 1,
    ZOMBIE,
    DOG
} ;

enum game_state {
    INGAME,
    MENU
} ;

typedef struct stance {
    sfIntRect rect;
} stance ;

typedef struct player_stance {
    stance idling;
    stance running;
    stance jumping;
    stance falling;
    stance crouch;
} player_stance ;

typedef struct player {
    sfClock *move_clock;
    sfClock *anim_clock;
    sfTime elapsed_time;
    sfEvent player_event;
    sfSprite *sprite;
    sfTexture *texture;
    sfSound *sound;
    sfVector2f pos;
    player_stance stance_anim;
    float dy;
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
    sfClock *layer_clock;
    parallax_layer first_layer;
    parallax_layer second_layer;
    parallax_layer third_layer;
    parallax_layer fourth_layer;
    parallax_layer fifth_layer;
    parallax_layer sixth_layer;
} parallax ;

typedef struct enemy_types {
    sfTexture *bat_texture;
    sfTexture *zombie_texture;
} enemy_types ;

typedef struct enemy_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect text_rect;
    sfIntRect hitbox;
    enemy_types enemy_types;
    struct enemy_t *previous;
    struct enemy_t *next;
} enemy_t ;

typedef struct enemies_clocks {
    sfClock *move_clock;
    sfClock *anim_clock;
} enemies_clocks ;

typedef struct running_scene {
    sfRenderWindow *window;
    sfEvent event;
    parallax parallax;
    enemy_t *enemies;
    enemies_clocks clocks;
    player player;
    int state;
} running_scene ;

typedef struct menu_scene {

} menu_scene ;

typedef struct game_core {
    sfRenderWindow *window;
    int game_state;
    running_scene running_scene;
    menu_scene menu_scene;
} game_core ;

int check_args(char *);
bool check_map(char *);
void run(char *map);

void aji_game_core(game_core *, char *);
void aji_running_scene(running_scene *, sfRenderWindow *, char *);
void aji_enemy_list_scratch(enemy_t *);
void aji_enemy_types(enemy_types *);
void aji_enemy_list(enemy_t *, char *);
void aji_enemies_clocks(enemies_clocks *);
void add_node_enemy(enemy_t *, int);
void create_enemy_filled_list(enemy_t *, int);
void create_enemy_empty_list(enemy_t *, int);
void fill_enemy_texture(enemy_t *, int);
void fill_rect_bat(sfIntRect *_rect);
void aji_parallax(parallax *);
void aji_player(player *);
void aji_player_stance(player_stance *);
void aji_player_stance_idle(stance *);
void aji_player_stance_running(stance *);
void aji_player_stance_jumping(stance *);
void aji_player_stance_falling(stance *);
void aji_player_stance_crouch(stance *);
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
void aju_player(player *);
void aju_player_event(player *);
void aju_player_position(player *);
void aju_first_layer(parallax_layer *, sfClock *);
void aju_second_layer(parallax_layer *, sfClock *);
void aju_third_layer(parallax_layer *, sfClock *);
void aju_fourth_layer(parallax_layer *, sfClock *);
void aju_fifth_layer(parallax_layer *, sfClock *);
void aju_sixth_layer(parallax_layer *, sfClock *);
void aju_enemy_list(running_scene *);
void aju_enemy_list_pos(enemy_t *, enemies_clocks *);
void reset_enemies_clocks(enemies_clocks *);

void ajd_game_core(game_core *, sfRenderWindow *);
void ajd_running_scene(running_scene *);
void ajd_parallax(parallax *, sfRenderWindow *);
void ajd_player(player *, sfRenderWindow *);
void ajd_enemy_list(enemy_t *, sfRenderWindow *);
#endif