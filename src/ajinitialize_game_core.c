/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** aji_game_core
*/

#include "../include/my_runner.h"

void aji_option_background(menu_background *_bg)
{
    _bg->clock = NULL;
    _bg->sprite = sfSprite_create();
    _bg->texture = sfTexture_createFromFile("img/background/menu.png", NULL);
    _bg->rect = (sfIntRect){0, 0, 256, 141};
    sfSprite_setTexture(_bg->sprite, _bg->texture, sfTrue);
    sfSprite_setTextureRect(_bg->sprite, _bg->rect);
    sfSprite_setPosition(_bg->sprite, (sfVector2f){0, 0});
    sfSprite_setScale(_bg->sprite, (sfVector2f){SCALE_FACTOR, SCALE_FACTOR * 1.7});
}

void aji_option_sliders(option_scene *_scene)
{
    sfVector2f slider_offset = {50, 100};
    sfFont *font = sfFont_createFromFile("font/score_font.ttf");
    for (int i = 0; i < OPTION_SLIDER_COUNT; i++, slider_offset.y += 20) {
        _scene->slider[i] = malloc(sizeof(slider_t));
        _scene->slider[i]->indicator_pos = (sfVector2f){slider_offset.x * SCALE_FACTOR, slider_offset.y * SCALE_FACTOR};
        _scene->slider[i]->slider_pos = (sfVector2f){_scene->slider[i]->indicator_pos.x, _scene->slider[i]->indicator_pos.y + 5 * SCALE_FACTOR / 2};
        _scene->slider[i]->min_value = 0;
        _scene->slider[i]->max_value = 15;
        _scene->slider[i]->curr_value = 0;

        _scene->slider[i]->indicator = sfRectangleShape_create();
        sfRectangleShape_setSize(_scene->slider[i]->indicator, (sfVector2f){5 * SCALE_FACTOR, 10 * SCALE_FACTOR});
        sfRectangleShape_setPosition(_scene->slider[i]->indicator, _scene->slider[i]->indicator_pos);
        sfRectangleShape_setFillColor(_scene->slider[i]->indicator, (sfColor){255, 255, 255, 255});

        _scene->slider[i]->slider =  sfRectangleShape_create();
        sfRectangleShape_setSize(_scene->slider[i]->slider, (sfVector2f){50 * SCALE_FACTOR, 5 * SCALE_FACTOR});
        sfRectangleShape_setPosition(_scene->slider[i]->slider, _scene->slider[i]->slider_pos);
        sfRectangleShape_setFillColor(_scene->slider[i]->slider, (sfColor){200, 200, 200, 255});

        _scene->slider[i]->value_text = sfText_create();
        sfText_setFont(_scene->slider[i]->value_text, font);
        sfText_setString(_scene->slider[i]->value_text, "0");
        sfText_setCharacterSize(_scene->slider[i]->value_text, 9U * SCALE_FACTOR);
        sfText_setPosition(_scene->slider[i]->value_text, (sfVector2f){_scene->slider[i]->slider_pos.x + sfRectangleShape_getLocalBounds(_scene->slider[i]->slider).width, _scene->slider[i]->slider_pos.y - sfRectangleShape_getLocalBounds(_scene->slider[i]->slider).height / 2});
    }
}

void aji_preview_rect(option_scene *_scene)
{
    _scene->preview_rect = sfRectangleShape_create();
    sfRectangleShape_setSize(_scene->preview_rect, (sfVector2f){50 * SCALE_FACTOR, 50 * SCALE_FACTOR});
    sfRectangleShape_setPosition(_scene->preview_rect, (sfVector2f){WINDOW_WIDTH / 4 * 3, WINDOW_HEIGHT / 2 - (50 * SCALE_FACTOR / 2)});
    sfRectangleShape_setFillColor(_scene->preview_rect, (sfColor){0, 0, 0, 255});
}

void aji_option_foreground(option_scene *_scene)
{
    aji_option_sliders(_scene);
    aji_preview_rect(_scene);
}

void aji_option_scene(option_scene *_scene, sfRenderWindow *_window)
{
    _scene->window = _window;
    _scene->selector_index = 0;
    aji_option_background(&_scene->background);
    aji_option_foreground(_scene);
}

void aji_game_core(game_core *_game_core, char *map)
{
    _game_core->window = sfRenderWindow_create((sfVideoMode){WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_BPP},
    "Alucard's Journey", sfDefaultStyle, NULL);;
    sfRenderWindow_setFramerateLimit(_game_core->window, WINDOW_FRAMERATE);
    _game_core->game_state = MENU;

    _game_core->menu_scene.game_state = malloc(sizeof(int));
    _game_core->menu_scene.game_state = &_game_core->game_state;

    _game_core->running_scene.game_state = malloc(sizeof(int));
    _game_core->running_scene.game_state = &_game_core->game_state;

    _game_core->option_scene.game_state = malloc(sizeof(int));
    _game_core->option_scene.game_state = &_game_core->game_state;

    aji_game_over_scene(&_game_core->game_over_scene, _game_core->window);
    aji_menu_scene(&_game_core->menu_scene, _game_core->window);
    aji_running_scene(&_game_core->running_scene, _game_core->window, map);
    aji_option_scene(&_game_core->option_scene, _game_core->window);
}