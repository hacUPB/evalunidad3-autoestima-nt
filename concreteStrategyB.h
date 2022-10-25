#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H
#include "istrategy.h"

typedef struct 
{
    istrategy strategyB;

} concreteStrategyB; 

concreteStrategyB *new_concreteStrategyB(); 
void concreteStrategyB_ctor(concreteStrategyB*);
void concreteStrategyB_dtor(concreteStrategyB*);
void invert (char*);

#endif
