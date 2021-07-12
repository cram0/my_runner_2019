/*
** EPITECH PROJECT, 2021
** my_runner_2019
** File description:
** utils
*/

#include "../include/my_runner.h"

int get_random_number(int min, int max)
{
    return ((rand() % (max - min + 1)) + min);
}

bool has_monsters(char *map)
{
    int monster_count = 0;
    int i = 0;

    while (map[i]) {
        if (map[i] == '1' || map[i] == '2' || map[i] == '3' || map[i] == '4')
            monster_count++;
        i++;
    }
    if (monster_count == 0)
        return (false);
    return (true);
}

bool has_items(char *map)
{
    int item_count = 0;
    int i = 0;

    while (map[i]) {
        if (map[i] == 's' || map[i] == 'i' || map[i] == 't' ||
            map[i] == 'a' || map[i] == 'S' || map[i] == 'p')
            item_count++;
        i++;
    }
    if (item_count == 0)
        return (false);
    return (true);
}

bool is_good_map(char *map)
{
    int i = 0;

    while (map[i]) {
        if (map[i] != '_' && map[i] != '1' && map[i] != '2' && map[i] != '3'
        && map[i] != '4' && map[i] != ' ' && map[i] != '\n' && map[i] != 's'
        && map[i] != 'i' && map[i] != 't' && map[i] != 'a' && map[i] != 'S'
        && map[i] != 'p')
            return (false);
        i++;
    }
    return (has_monsters(map) && has_items(map));
}

void drawSprite_ifInScreen(sfRenderWindow *window, sfSprite *sprite) {
    if ((sfSprite_getPosition(sprite).x >= -200 && sfSprite_getPosition(sprite).x <= WINDOW_WIDTH + 200) &&
        sfSprite_getPosition(sprite).y >= -200 && sfSprite_getPosition(sprite).y <= WINDOW_HEIGHT + 200) {
            sfRenderWindow_drawSprite(window, sprite, NULL);
        }
}