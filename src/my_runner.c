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
    sfEvent event;
    sfRenderWindow_setFramerateLimit(window, 120);
    game_core game_core;
    aji_game_core(&game_core);
    
    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_display(window);
    }
}

int main(void)
{
    run();
    return (0);
}