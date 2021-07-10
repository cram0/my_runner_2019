/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** ajinitialize_running_scene_score
*/

#include "../include/my_runner.h"

void aji_running_scene_score(running_scene *_scene)
{
    _scene->score_text = sfText_create();
    _scene->score = 0;
    sfFont *font_tmp = sfFont_createFromFile("font/score_font.ttf");
    sfText_setPosition(_scene->score_text, (sfVector2f){5.7 * SCALE_FACTOR, 5.7 * SCALE_FACTOR});
    sfText_setCharacterSize(_scene->score_text, (unsigned int)(9 * SCALE_FACTOR));
    sfText_setFillColor(_scene->score_text, sfWhite);
    // sfText_setOutlineColor(_scene->score_text, sfBlack);
    // sfText_setOutlineThickness(_scene->score_text, 2.0);
    sfText_setFont(_scene->score_text, font_tmp);
    sfText_setString(_scene->score_text, "Score");
}