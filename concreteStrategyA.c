#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyA.h"
#include "context.h"

concreteStrategyA *new_concreteStrategyA()
{
    return(concreteStrategyA *)malloc(sizeof(concreteStrategyA));
}

void Algoritmo1A(void * name)
{
    printf("Context:Sorting data using the strategy (not sure how it'll do it)\n");
    char *res =malloc(sizeof(char[20]));
    strcpy(res,(char*)name);
    printf("%s", res);
    printf("\n");
    free(res);

}

void concreteStrategyA_ctor(concreteStrategyA *this)
{
    istrategy_ctor((istrategy*)this);
    this->strategyA.Algoritmo_1 = Algoritmo1A;
}
