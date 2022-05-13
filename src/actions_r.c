/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** actions_r
*/

#include "pushswap.h"

void ra(node_t **head_a)
{
    node_t *first_a = *head_a;
    node_t *current_a = *head_a;

    while (current_a->next != NULL)
        current_a = current_a->next;
    *head_a = first_a->next;
    first_a->next = NULL;
    current_a->next = first_a;
}

void rb(node_t **head_b)
{
    node_t *first_b = *head_b;
    node_t *current_b = *head_b;

    while (current_b->next != NULL)
        current_b = current_b->next;
    *head_b = first_b->next;
    first_b->next = NULL;
    current_b->next = first_b;
}

void rr(node_t **head_a, node_t **head_b)
{
    ra(head_a);
    rb(head_b);
}
