/*
** EPITECH PROJECT, 2022
** Sans titre(Espace de travail)
** File description:
** write_ops
*/

#include "pushswap.h"

void writeops(int ac)
{
    for (int i = 1; i < ac; i++) {
        if (i == ac - 1)
            write(1, "pa\n", 3);
        else
            write(1, "pa ", 3);
    }
}
