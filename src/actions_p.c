/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** actions_p
*/

#include "pushswap.h"

void pa(node_t **head_a, node_t **head_b)
{
    node_t *first_b = *head_b;
    node_t *first_a = *head_a;

    if (first_b != NULL) {
        *head_b = first_b->next;
        first_b->next = first_a;
        *head_a = first_b;
    }
}

void pb(node_t **head_a, node_t **head_b)
{
    node_t *first_a = *head_a;
    node_t *first_b = *head_b;

    if (first_a != NULL) {
        *head_a = first_a->next;
        first_a->next = first_b;
        *head_b = first_a;
    }
}

void pp(node_t **head_a, node_t **head_b)
{
    pa(head_a, head_b);
    pb(head_a, head_b);
}
