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

bool is_good_map(char *map)
{
    int i = 0;
    while (map[i]) {
        if (map[i] != '_' && map[i] != '1' && map[i] != '2' && map[i] != '3'
        && map[i] != ' ' && map[i] != '\n' && map[i] != 's' && map[i] != 'i'
        && map[i] != 't' && map[i] != 'a' && map[i] != 'S' && map[i] != 'p')
            return (false);
        i++;
    }
    return (true);
}

void drawSprite_ifInScreen(sfRenderWindow *window, sfSprite *sprite) {
    if ((sfSprite_getPosition(sprite).x >= -200 && sfSprite_getPosition(sprite).x <= WINDOW_WIDTH + 200) &&
        sfSprite_getPosition(sprite).y >= -200 && sfSprite_getPosition(sprite).y <= WINDOW_HEIGHT + 200) {
            sfRenderWindow_drawSprite(window, sprite, NULL);
        }
}