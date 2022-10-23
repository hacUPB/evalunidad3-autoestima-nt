#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyA.h"

concreteStrategyA *new_concreteStrategyA()
{
    return(concreteStrategyA *)malloc(sizeof(concreteStrategyA));
}

void Algoritmo1A(void * nombre)
{
    printf("Context:Sorting data using the strategy (not sure how it'll do it)\n");
    char *res =malloc(sizeof(char[20]));
    strcpy(res,(char*)nombre);
    printf("%s", res);
    printf("\n");
    free(res);

}

void concreteStrategyA_ctor(concreteStrategyA *this)
{
    istrategy_ctor((istrategy*)this);
    this->concreteStrategyA.algoritmo1 = Algoritmo1A;
}
