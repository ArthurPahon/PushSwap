/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** actions_rr
*/

#include "pushswap.h"

void rra(node_t **head_a)
{
    node_t *last_a = *head_a;
    node_t *current_a = *head_a;

    while (last_a->next != NULL)
        last_a = last_a->next;
    while (current_a->next->next != NULL)
        current_a = current_a->next;
    last_a->next = *head_a;
    current_a->next = NULL;
    *head_a = last_a;
}

void rrb(node_t **head_b)
{
    node_t *last_b = *head_b;
    node_t *current_b = *head_b;

    while (last_b->next != NULL)
        last_b = last_b->next;
    while (current_b->next->next != NULL)
        current_b = current_b->next;
    last_b->next = *head_b;
    current_b->next = NULL;
    *head_b = last_b;
}

void rrr(node_t **head_a, node_t **head_b)
{
    rra(head_a);
    rrb(head_b);
}
