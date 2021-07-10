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
    _running_scene->thunder.thunder_clock = NULL;
    _running_scene->thunder.cooldown_clock = NULL;
    _running_scene->thunder.texture = sfTexture_createFromFile("img/background/thunder.png", &(sfIntRect){0, 0, 256, 173});
    _running_scene->thunder.sprite = sfSprite_create();
    sfSprite_setTexture(_running_scene->thunder.sprite, _running_scene->thunder.texture, sfFalse);
    sfSprite_setPosition(_running_scene->thunder.sprite, (sfVector2f){0.0 * SCALE_FACTOR, 0.0 * SCALE_FACTOR});
    sfSprite_setScale(_running_scene->thunder.sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR});
}