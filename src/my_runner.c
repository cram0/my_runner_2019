/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** main
*/

#include "../include/my_runner.h"

void run(void)
{
    sfRenderWindow *window = sfRenderWindow_create((sfVideoMode){896, 840, 32},
    "Alucard's Journey", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 120);

    game_core game_core;
    aji_game_core(&game_core, window);
    while (sfRenderWindow_isOpen(window)) {
        aju_game_core(&game_core);
        ajd_game_core(&game_core, window);
    }
}

void check_args(char *args)
{
    if (args[0] == '-' && args[1] == 'h')
        write(0, "LOLE", 4);
}

int main(int ac, char **av)
{
    if (ac == 2)
        check_args(av[1]);
    run();

    return (0);
}