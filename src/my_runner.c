/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** main
*/

#include "../include/my_runner.h"

bool check_map(char *_map)
{
    int fd = open(_map, O_RDONLY);
        if (fd < 0)
            return (false);
    struct stat *fd_stat = malloc(sizeof(struct stat));
    stat(_map, fd_stat);
    int map_size = fd_stat->st_size;
    char map[map_size];
    map[map_size] = '\0';
    read(fd, map, map_size);
    int map_i = 0;
    close(fd);
    while (map[map_i]) {
        if (map[map_i] != '_' && map[map_i] != '1' && map[map_i] != '2' && map[map_i] != '3' && map[map_i] != ' ' && map[map_i] != '\n') {
            return (false);
        }
        map_i++;
    }
    return(true);
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
        write(1, "LOLE", 4);
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
    return(0);
}

int main(int ac, char **av)
{
    if (ac == 2)
        check_args(av[1]);
    return (0);
}