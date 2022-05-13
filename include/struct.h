/*
** EPITECH PROJECT, 2022
** Modules
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_

    typedef struct node{
        int nb;
        struct node *next;
    } node_t;

    typedef struct comp{
        int min;
        int pos;
    } comp_t;

#endif /* !STRUCT_H_ */
