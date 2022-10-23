#ifndef CONTEXT_H
#define CONTEXT_H

#include "istrategy.h"

typedef struct
{
    istrategy* istrategy;

    char* nombre;

} context;

context context_new();
void context_ctor(context*, void);
void context_dtor(context*);
void SetStrategy(context*, void*);
void DoSomeBusinessLogic(context*);

#endif
