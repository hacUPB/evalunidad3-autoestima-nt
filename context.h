#ifndef CONTEXT
#define CONTEXT
#include "IStrategy.h"
typedef struct
{
    IStrategy* _strategy;
}Context;

Context* Context_New();

void ContextConstruct(IStrategy*);
void ContextDestruct(IStrategy*);
void SetStrategy(Context*, IStrategy*);
void DoSomeBusinessLogic();

#endif
