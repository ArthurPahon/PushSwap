/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** algo1
*/

#include "pushswap.h"

void seek_for_min(node_t **head_a, comp_t *get)
{
    node_t *current_a = *head_a;

    get->min = current_a->nb;

    while (current_a != NULL) {
        if (get->min > current_a->nb)
            get->min = current_a->nb;
        current_a = current_a->next;
    }
}

void get_min_pos(node_t **head_a, comp_t *get)
{
    node_t *current_a = *head_a;
    get->pos = 0;

    while (current_a->nb != get->min) {
        get->pos += 1;
        current_a = current_a->next;
    }
    get->pos += 1;
}

void get_min_on_top(node_t **head_a, comp_t *get)
{
    int i = 1;

    while (i < get->pos) {
        ra(head_a);
        my_putstr("ra ");
        i++;
    }
}

void all_to_lb(node_t **head_a, node_t **head_b, comp_t *get)
{
    while (*head_a != NULL) {
        seek_for_min(head_a, get);
        get_min_pos(head_a, get);
        get_min_on_top(head_a, get);
        pb(head_a, head_b);
        my_putstr("pb ");
    }
}

void all_to_la(node_t **head_a, node_t **head_b)
{
    while (*head_b != NULL)
        pa(head_a, head_b);
}
