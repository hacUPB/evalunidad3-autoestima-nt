#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include "context.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include "istrategy.h"

int main(void)
{

istrategy *istrategy = istrategy_new();
istrategy_ctor(istrategy);

concreteStrategyA *concreteStrategyA = concreteStrategyA_new();
concreteStrategyA_ctor(concreteStrategyA);

concreteStrategyB *concreteStrategyB = concreteStrategyB_new();
concreteStrategyB_ctor(concreteStrategyB);

context *context = context_New();
context_ctor(context, concreteStrategyA);

printf("Client: Strategy is set to normal sorting.");
DoSomeBusinessLogic(context);
printf("\n");

printf("Client: Strategy is set to normal sorting.");
SetStrategy(context,concreteStrategyB);
DoSomeBusinessLogic(context);

context_dtor(context);
free(context);

istrategy_dtor(istrategy);
free(istrategy);

concreteStrategyA_dtor(concreteStrategyA);
free(concreteStrategyA);

concreteStrategyB_dtor(concreteStrategyB);
free(concreteStrategyB);

return 0;
}

