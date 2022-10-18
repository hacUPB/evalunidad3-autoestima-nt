#ifndef CONCRETESTRATEGYB_H
#define CONCRETESTRATEGYB_H
#include "istrategy.h"

typedef struct 
{
    istrategy istrategy_B;

} concreteStrategyB; 

concreteStrategyB *concreteStrategyB_new(); 
void concreteStrategyB_ctor(concreteStrategyB*);
void concreteStrategyB_dtor(concreteStrategyB*);

