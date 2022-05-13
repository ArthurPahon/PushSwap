/*
** EPITECH PROJECT, 2021
** Sans titre(Espace de travail)
** File description:
** actions_s
*/

#include "pushswap.h"

void sa(node_t **head_a)
{
    node_t *first_a = *head_a;
    node_t *second_a = first_a->next;

    if (first_a->next != NULL) {
        first_a->next = second_a->next;
        second_a->next = first_a;
        *head_a = second_a;
    }
}

void sb(node_t **head_b)
{
    node_t *first_b = *head_b;
    node_t *second_b = first_b->next;

    if (first_b->next != NULL) {
        first_b->next = second_b->next;
        second_b->next = first_b;
        *head_b = second_b;
    }
}

void sc(node_t **head_a, node_t **head_b)
{
    sa(head_a);
    sb(head_b);
}
