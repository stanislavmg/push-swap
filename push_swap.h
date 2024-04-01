#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>

typedef enum
{
    false, true
}   bool;

typedef struct  s_stack
{
    int data;
    struct  s_stack *next;
}stack;

#endif