/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** main
*/

#include "../include/my_runner.h"

void print_usage(void)
{
    write(1, "\nHi !\n\nWelcome to Alucard's Journey, Where monsters ", 53);
    write(1, "are tormenting Alucard back ", 29);
    write(1, "from the castle, help him leave the countryside !\n\n", 52);
    write(1, "USAGE :\n./my_runner MAPS_NAME\n", 32);
    write(1, "Check the '.legend' file to make your own map.\n\n", 49);
    write(1, "INSTRUCTIONS :\nPress ENTER to start the game.\n", 47);
    write(1, "Press ESCAPE to exit at any point within the game.\n", 52);
    write(1, "Press SPACE to jump.\nPress S to crouch.\n", 41);
    write(1, "Please note : You can activate debug mode (which, i believe", 60);
    write(1, ", will help you deal with the difficulty of the ", 49);
    write(1, "jumps' precision), by pressing F12.\n\n", 38);
    write(1, "PS : You may want to press ENTER quickly when you launch ", 58);
    write(1, "the program, as sometimes, ", 28);
    write(1, "enemy hitboxes are weirdly initialized, ", 41);
    write(1, "and cause the player to hit one of them right at the start.\n",
    61);
    write(1, "((The dev is actively working trying to fix it", 47);
    write(1, ", pls dont hit me))\n", 21);
    write(1, "Also NO, the window is NOT resizable, it is by game ", 53);
    write(1, "design choice.\n\n", 17);
}

bool check_map(char *_map)
{
    int fd = open(_map, O_RDONLY), map_size = 0;
        if (fd < 0)
            return (false);
    char test;
    while (read(fd, &test, 1) > 0)
        map_size++;
    close(fd);
    open(_map, O_RDONLY);
    char map[map_size];
    map[map_size] = '\0';
    read(fd, map, map_size);
    close(fd);
    int map_i = 0;
    while (map[map_i]) {
        if (map[map_i] != '_' && map[map_i] != '1' && map[map_i] != '2' && map
        [map_i] != '3' && map[map_i] != ' ' && map[map_i] != '\n')
            return (false);
        map_i++;
    }
    return (true);
}

void run(char *map)
{
    game_core game_core;
    aji_game_core(&game_core, map);
    while (sfRenderWindow_isOpen(game_core.window)) {
        aju_game_core(&game_core);
        ajd_game_core(&game_core, game_core.window);
    }
}

int check_args(char *arg)
{
    if (arg[0] == '-' && arg[1] == 'h') {
        print_usage();
        return (0);
    }
    else
        if (!check_map(arg)) {
            write(1, "Invalid map\n", 13);
            return (1);
        }
    int fd = open(arg, O_RDONLY), map_size = 0;
    char test;
    while (read(fd, &test, 1) > 0)
        map_size++;
    close(fd);
    fd = open(arg, O_RDONLY);
    char map[map_size];
    read(fd, map, map_size);
    map[map_size] = '\0';
    run(map);
    return (0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        check_args(av[1]);
    return (0);
}