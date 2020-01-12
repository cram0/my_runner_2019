/*
** EPITECH PROJECT, 2020
** MUL_my_runner_2019
** File description:
** aji_enemy_list
*/

#include "../include/my_runner.h"

void add_node_enemy_empty(enemy_t *_enemies, int enemy_id, enemy_types_text
*_types)
{
    _enemies->sprite = sfSprite_create();
    _enemies->texture = fill_enemy_texture(enemy_id, _types);
    _enemies->pos = fill_enemy_pos(enemy_id);
    _enemies->text_rect = fill_enemy_rect(enemy_id);
    _enemies->hitbox = fill_enemy_hitbox(enemy_id);
    _enemies->type = fill_enemy_type(enemy_id);
    _enemies->anim_clock = sfClock_create();
    sfSprite_setTexture(_enemies->sprite, _enemies->texture, sfTrue);
    sfSprite_setTextureRect(_enemies->sprite, _enemies->text_rect);
    sfSprite_setPosition(_enemies->sprite, _enemies->pos);
    sfSprite_setScale(_enemies->sprite, (sfVector2f){3.5, 3.5});
}

void add_node_enemy_filled(enemy_t *_enemies, int enemy_id, enemy_types_text
*_types, int offset)
{
    while (_enemies->next != NULL)
        _enemies = _enemies->next;
    enemy_t *temp = malloc(sizeof(enemy_t));
    temp->sprite = sfSprite_create();
    temp->texture = fill_enemy_texture(enemy_id, _types);
    temp->pos = fill_enemy_pos(enemy_id);
    temp->pos.x += offset;
    temp->text_rect = fill_enemy_rect(enemy_id);
    temp->hitbox = fill_enemy_hitbox(enemy_id);
    temp->type = fill_enemy_type(enemy_id);
    temp->anim_clock = sfClock_create();
    sfSprite_setTexture(temp->sprite, temp->texture, sfTrue);
    sfSprite_setTextureRect(temp->sprite, temp->text_rect);
    sfSprite_setPosition(temp->sprite, temp->pos);
    sfSprite_setScale(temp->sprite, (sfVector2f){3.5, 3.5});
    _enemies->next = temp;
    temp->previous = _enemies;
    temp->next = NULL;
}

void add_node_enemy(enemy_t *_enemies, int enemy_id, enemy_types_text *_types,
int offset)
{
    if (_enemies->sprite == NULL) {
        add_node_enemy_empty(_enemies, enemy_id, _types);
    }
    else {
        add_node_enemy_filled(_enemies, enemy_id, _types, offset);
    }
}

void aji_enemy_list_scratch(enemy_t *_enemies)
{
    _enemies->sprite = NULL;
    _enemies->previous = NULL;
    _enemies->next = NULL;
}

void aji_enemy_list(enemy_t *_enemies, char *map, enemy_types_text *_enemy_type)
{
    aji_enemy_list_scratch(_enemies);
    int map_i = 0, offset = 1500;
    while (map[map_i++])
        switch (map[map_i]) {
            case '1': offset += 100;
                add_node_enemy(_enemies, BAT, _enemy_type, offset);
                break;
            case '2': offset += 600;
                add_node_enemy(_enemies, WEREWOLF, _enemy_type, offset);
                break;
            case '3': offset += 1000;
                add_node_enemy(_enemies, PANTHER, _enemy_type, offset);
                break;
            case ' ': offset += 100;
                break;
            default:
                break;
        }
}