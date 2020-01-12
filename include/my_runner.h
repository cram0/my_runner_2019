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
    WEREWOLF,
    PANTHER
} ;

enum game_state {
    INGAME,
    MENU,
    GAMEOVER
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
    sfIntRect hitbox;
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

typedef struct enemy_types_text {
    sfTexture *bat_texture;
    sfTexture *panther_texture;
    sfTexture *werewolf_texture;
} enemy_types_text ;

typedef struct enemy_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
    sfIntRect text_rect;
    sfIntRect hitbox;
    sfClock *anim_clock;
    int type;
    struct enemy_t *previous;
    struct enemy_t *next;
} enemy_t ;

typedef struct enemies_clocks {
    sfClock *move_clock;
    sfClock *anim_clock;
} enemies_clocks ;

typedef struct running_scene {
    sfRenderWindow *window;
    sfMusic *music;
    sfEvent event;
    parallax parallax;
    enemy_t *enemies;
    enemy_types_text enemy_types_text;
    enemies_clocks clocks;
    player player;
    bool debug;
    int *game_state;
} running_scene ;

typedef struct menu_background {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfClock *clock;
} menu_background ;

typedef struct menu_foreground {
    sfSprite *start_spr;
    sfTexture *start_text;
    sfSprite *title_spr;
    sfTexture *title_text;
    sfClock *start_clock;
    bool start_show;
} menu_foreground ;

typedef struct menu_scene {
    sfRenderWindow *window;
    sfEvent event;
    int *game_state;
    sfMusic *music;
    menu_foreground foreground;
    menu_background background;
    sfSound *sound_onchange;
    sfSound *sound_onclick;
    sfSound *sound_start;
    sfSoundBuffer *sound_start_buf;
} menu_scene ;

typedef struct game_over_scene {
    sfSprite *sprite;
    sfTexture *texture;
    sfMusic *music;
    sfVector2f pos;
    sfRenderWindow *window;
    sfIntRect text_rect;
    sfClock *clock;
} game_over_scene ;

typedef struct game_core {
    sfRenderWindow *window;
    int game_state;
    sfEvent event;
    running_scene running_scene;
    menu_scene menu_scene;
    game_over_scene game_over_scene;
} game_core ;

int check_args(char *);
bool check_map(char *);
void run(char *map);

void aji_game_core(game_core *, char *);
void aji_menu_scene(menu_scene *, sfRenderWindow *);
void aji_menu_scene_music(menu_scene *);
void aji_menu_background(menu_background *);
void aji_running_scene(running_scene *, sfRenderWindow *, char *);
void aji_running_scene_music(running_scene *);
void aji_enemy_list_scratch(enemy_t *);
void aji_enemy_types_text(enemy_types_text *);
void aji_enemy_list(enemy_t *, char *, enemy_types_text *);
void aji_enemies_clocks(enemies_clocks *);
void aji_menu_foreground(menu_foreground *);
void add_node_enemy(enemy_t *, int, enemy_types_text *, int);
void add_node_enemy_empty(enemy_t *, int, enemy_types_text *);
void add_node_enemy_filled(enemy_t *, int, enemy_types_text *, int);
sfTexture *fill_enemy_texture(int, enemy_types_text *);
sfIntRect fill_enemy_rect(int);
sfVector2f fill_enemy_pos(int);
sfIntRect fill_enemy_hitbox(int);
int fill_enemy_type(int);
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
void aji_game_over_scene(game_over_scene *, sfRenderWindow *);


void aju_game_core(game_core *);
void aju_menu_scene(menu_scene *);
void aju_menu_scene_event(menu_scene *);
void aju_menu_background(menu_background *);
void aju_menu_foreground(menu_foreground *);
void aju_running_scene(running_scene *);
void aju_running_scene_event(running_scene *);
void aju_parallax(parallax *);
void aju_player(player *);
void aju_player_event(player *);
void aju_player_position(player *);
void aju_player_animation(player *);
void aju_player_animation_idle(player *);
void aju_player_animation_crouch(player *);
void aju_player_animation_jumping(player *);
void aju_player_animation_falling(player *);
void aju_player_animation_running(player *);
void aju_first_layer(parallax_layer *, sfClock *);
void aju_second_layer(parallax_layer *, sfClock *);
void aju_third_layer(parallax_layer *, sfClock *);
void aju_fourth_layer(parallax_layer *, sfClock *);
void aju_fifth_layer(parallax_layer *, sfClock *);
void aju_sixth_layer(parallax_layer *, sfClock *);
void aju_enemy_list(running_scene *);
void aju_enemy_list_pos(enemy_t *, enemies_clocks *);
void aju_enemy_list_anims(enemy_t *);
void aju_enemy_list_hitboxes(enemy_t *);
void aju_enemy_hitbox(enemy_t *);
void aju_bat_hitbox(enemy_t *);
void aju_ww_hitbox(enemy_t *);
void aju_panther_hitbox(enemy_t *);
void aju_bat_anim(enemy_t *);
void aju_ww_anim(enemy_t *);
void aju_panth_anim(enemy_t *);
void aju_hitbox_collision(running_scene);
void reset_enemies_clocks(enemies_clocks *);
void aju_game_over_scene(game_over_scene *);

void ajd_game_core(game_core *, sfRenderWindow *);
void ajd_running_scene(running_scene *);
void ajd_menu_scene(menu_scene *);
void ajd_parallax(parallax *, sfRenderWindow *);
void ajd_player(player *, sfRenderWindow *);
void ajd_enemy_list(enemy_t *, sfRenderWindow *, bool);
void ajd_dbg_player_hitbox(running_scene *);
void ajd_game_over_scene(game_over_scene *);
#endif