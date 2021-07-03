/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_running_scene
*/

#include "../include/my_runner.h"

void aji_thunder(running_scene *_running_scene)
{
    _running_scene->thunder.time_till_next_thunder = 0;
    _running_scene->thunder.is_detonating = false;
    _running_scene->thunder.sound = sfSound_create();
    _running_scene->thunder.sound_buffer = sfSoundBuffer_createFromFile("sounds/running_scene/thunder.ogg");
    sfSound_setBuffer(_running_scene->thunder.sound, _running_scene->thunder.sound_buffer);
    sfSound_setVolume(_running_scene->thunder.sound, VOLUME);
    _running_scene->thunder.thunder_clock = sfClock_create();
    _running_scene->thunder.cooldown_clock = sfClock_create();
    _running_scene->thunder.texture = sfTexture_createFromFile("img/background/thunder.png", NULL);
    _running_scene->thunder.sprite = sfSprite_create();
    sfSprite_setTexture(_running_scene->thunder.sprite, _running_scene->thunder.texture, sfFalse);
    sfSprite_setPosition(_running_scene->thunder.sprite, (sfVector2f){0.0, 0.0});
    sfSprite_setScale(_running_scene->thunder.sprite, (sfVector2f){3.5, 3.5});
}

void aji_running_scene(running_scene *_running_scene, sfRenderWindow *_window, char *map)
{
    _running_scene->window = _window;
    _running_scene->enemies = malloc(sizeof(enemy_t));
    _running_scene->debug = false;
    _running_scene->clock = sfClock_create();
    aji_enemy_types_text(&_running_scene->enemy_types_text);
    aji_enemy_list(_running_scene->enemies, map, &_running_scene->enemy_types_text);
    aji_enemies_clocks(&_running_scene->clocks);
    aji_parallax(&_running_scene->parallax);
    aji_thunder(_running_scene);
    aji_player(&_running_scene->player);
    aji_running_scene_music(_running_scene);
    aji_running_scene_score(_running_scene);
}