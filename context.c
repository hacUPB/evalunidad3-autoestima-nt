#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Context.h"
#include "ConcretStrategyA.h"
#include "ConcretStrategyB.h"

Context* Context_New()
{
    Context *cont = malloc(sizeof(Context));
    return cont;
}
void SetStrategy(Context* cont, IStrategy* this)
{    
    IStrategy* IStrategy=this;
    cont->_strategy=this;
}
void ContextConstruct(IStrategy*this)
{
    free(this);
}
void DoSomeBusinessLogic(Context* cont, IStrategy* tipo)
{
    printf("Context: Sorting data using the strategy (not sure how it'll do it)");
    char data=cont->_strategy->doit((IStrategy*)tipo);
    printf("%s",data);
}
