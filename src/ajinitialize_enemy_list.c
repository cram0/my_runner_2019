/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_enemy_list
*/

#include "../include/my_runner.h"

void fill_enemy_texture(enemy_t *_enemy, int enemy_type)
{
    switch (enemy_type) {
        case BAT: _enemy->texture = _enemy->enemy_types.bat_texture;
            break;
        case ZOMBIE: _enemy->texture = _enemy->enemy_types.bat_texture;
            break;
        case DOG: _enemy->texture = _enemy->enemy_types.bat_texture;
            break;
    }
}

void fill_rect_bat(sfIntRect *_rect)
{
    sfIntRect *temp = malloc(sizeof(sfIntRect));
    temp->top = 0;
    temp->left = 0;
    temp->width = 16;
    temp->height = 29;
    _rect = temp;
}

void create_enemy_empty_list(enemy_t *_enemies, int enemy_id)
{
    write(1, "NULL ONCE ?\n", 13);
    _enemies->sprite = sfSprite_create();
    fill_enemy_texture(_enemies, enemy_id);
    _enemies->pos = malloc(sizeof(sfVector2f));
    _enemies->pos->x = 50;
    _enemies->pos->y = 50;
    fill_rect_bat(_enemies->text_rect);
    // sfSprite_setTexture(_enemies->sprite, _enemies->texture, sfTrue);
    sfSprite_setTextureRect(_enemies->sprite, *_enemies->text_rect);
    sfSprite_setPosition(_enemies->sprite, *_enemies->pos);
    sfSprite_setScale(_enemies->sprite, (sfVector2f){3.5, 3.5});
}

void create_enemy_filled_list(enemy_t *_enemies, int enemy_id)
{
    write(1, "FILLED ONCE ?\n", 15);
    enemy_t *temp = malloc(sizeof(enemy_t));
    temp->sprite = sfSprite_create();
    fill_enemy_texture(temp, enemy_id);
    _enemies->pos = malloc(sizeof(sfVector2f));
    _enemies->pos->x = 500;
    _enemies->pos->y = 500;
    _enemies->text_rect = malloc(sizeof(sfIntRect));
    fill_rect_bat(temp->text_rect);
    // sfSprite_setTexture(_enemies->sprite, _enemies->texture, sfTrue);
    sfSprite_setTextureRect(temp->sprite, *temp->text_rect);
    sfSprite_setPosition(temp->sprite, *temp->pos);
    sfSprite_setScale(temp->sprite, (sfVector2f){3.5, 3.5});
    _enemies->next = temp;
    temp->previous = _enemies;
    temp->next = NULL;
}

void add_node_enemy(enemy_t *_enemies, int enemy_id)
{
    if (_enemies->pos == NULL) {
        create_enemy_empty_list(_enemies, enemy_id);
    }
    else {
        create_enemy_filled_list(_enemies, enemy_id);
    }
}

void aji_enemy_list_scratch(enemy_t *_enemies)
{
    _enemies->sprite = NULL;
    _enemies->texture = NULL;
    _enemies->pos = NULL;
    _enemies->previous = NULL;
    _enemies->next = NULL;
}

void aji_enemy_types(enemy_types *_enemy_type)
{
    _enemy_type->bat_texture = sfTexture_createFromFile(
    "img/monsters/bat.png", NULL);
    _enemy_type->zombie_texture = sfTexture_createFromFile(
    "img/monsters/bat.png", NULL);
}

void aji_enemy_list(enemy_t *_enemies, char *map)
{
    aji_enemy_list_scratch(_enemies);
    aji_enemy_types(&_enemies->enemy_types);
    int map_i = 0;
    while (map[map_i++]) {
        switch (map[map_i])
        {
        case '1':
            add_node_enemy(_enemies, BAT);
            break;
        case '2':
            add_node_enemy(_enemies, BAT);
            break;
        case '3':
            add_node_enemy(_enemies, BAT);
        default:
            break;
        }
    }
}