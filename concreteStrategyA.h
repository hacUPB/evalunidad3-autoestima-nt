#ifndef CONCRETESTRATEGYA_H
#define CONCRETESTRATEGYA_H

#include "istrategy.h"

typedef struct 
{
    istrategy istrategy_A;

} concreteStrategyA; 

concreteStrategyA *concreteStrategyA_new(); 
void concreteStrategyA_ctor(concreteStrategyA*);
void concreteStrategyA_dtor(concreteStrategyA*);
