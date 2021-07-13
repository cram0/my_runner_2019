/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** ajdisplay_game_core
*/

#include "../include/my_runner.h"

void ajd_option_scene(option_scene *_scene)
{
    sfRenderWindow_drawSprite(_scene->window, _scene->background.sprite, NULL);
    for (int i = 0; i < OPTION_SLIDER_COUNT; i++) {
        char tmp_txt[3] = {'\0'};
        sprintf(tmp_txt, "%d", _scene->slider[i]->curr_value);
        sfText_setString(_scene->slider[i]->value_text, tmp_txt);

        sfRenderWindow_drawRectangleShape(_scene->window, _scene->slider[i]->slider, NULL);
        sfRenderWindow_drawRectangleShape(_scene->window, _scene->slider[i]->indicator, NULL);
        sfRenderWindow_drawRectangleShape(_scene->window, _scene->preview_rect, NULL);
        sfRenderWindow_drawText(_scene->window, _scene->slider[i]->value_text, NULL);
    }

}

void ajd_game_core(game_core *_game_core, sfRenderWindow *_window)
{
    if (_game_core->game_state == INGAME)
        ajd_running_scene(&_game_core->running_scene);
    if (_game_core->game_state == MENU)
        ajd_menu_scene(&_game_core->menu_scene);
    if (_game_core->game_state == GAMEOVER)
        ajd_game_over_scene(&_game_core->game_over_scene);
    if (_game_core->game_state == OPTION)
        ajd_option_scene(&_game_core->option_scene);
    sfRenderWindow_display(_window);
}