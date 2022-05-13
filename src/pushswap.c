/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main.c
** First edition:
** 15:26:42 17/12/2021
*/

#include "pushswap.h"

void myfree(node_t *head_a, node_t *head_b, comp_t *get)
{
    free(head_a);
    free(head_b);
    free(get);
}

int main(int ac, char *av[])
{
    if (ac == 1)
        return 84;
    node_t *head_a = (node_t *)malloc(sizeof(node_t));
    node_t *head_b = NULL;
    comp_t *get = malloc(sizeof(comp_t));
    mylist(ac, av, head_a);
    all_to_lb(&head_a, &head_b, get);
    all_to_la(&head_a, &head_b);
    writeops(ac);
    myfree(head_a, head_b, get);
    return 0;
}
