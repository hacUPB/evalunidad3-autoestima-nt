-Se heredan las clases

#include "context.h"
#include "concreteStrategyA.h"
#include "concreteStrategyB.h"
#include "istrategy.h"

-Se crea el main
int main(void)
{
-Se instancia las clases en el main
istrategy_t istrategy = istrategy_new();

-Se llama los contructores para istrategy
istrategy_ctor(istrategy);

-Instanciamos Strategy A
concreteStrategyA_tconcreteStrategyA = concreteStrategyA_new();

-Constructor de Strategy A
concreteStrategyA_ctor(concreteStrategyA);

-Instanciamos Strategy B
concreteStrategyB_t concreteStrategyB = concreteStrategyB_new();

-Constructor de Strategy B
concreteStrategyB_ctor(concreteStrategyB);

-Instanciamos el context
context_tcontext = context_new();

-Constructor de context
context_ctor(context);

-Se imprime el primer texto
printf("Client: Strategy is set to normal sorting.");

-Le mandamos a Strat A lo que necesita
SetStrategy(context,concreteStrategyA);

-Manda a hacer algo al Context
DoSomeBusinessLogic(context);

-Se separan las lineas
printf("\n");

-Se imprime el segundo mensaje
printf("Client: Strategy is set to normal sorting.");

-Le mandamos a Strat B lo que necesita
SetStrategy(context,concreteStrategyB);

-Manda a hacer algo al Context 
DoSomeBusinessLogic(context);

-Se crea el destructor para liberar la memoria de Context
context_dtor(context);
free(context);

-Se crea el destructor para liberar la memoria de isstrategy
istrategy_dtor(istrategy);
free(istrategy);

-Se crea el destructor para liberar la memoria de Strategy A
concreteStrategyA_dtor(concreteStrategyA);
free(concreteStrategyA);

-Se crea el destructor para liberar la memoria de Strategy B
concreteStrategyB_dtor(concreteStrategyB);
free(concreteStrategyB);

return 0;

}