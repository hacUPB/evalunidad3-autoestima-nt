#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyB.h"
#include "context.h"

concreteStrategyB *nuevaestrategiaB()
{
    return (concreteStrategyB*)malloc(sizeof(concreteStrategyB));
}
void Algoritmo1B(void * name)
{
    printf("Client: Strategy is set to reverse sorting.");
    char* list = malloc(sizeof(char[20]));
    strcpy(list,(char*)name);
    Reverse(list);
    free(list);
}
void invert (char * list)
{
    char *puntero_1, *puntero_2;
    puntero_1 = list;
    puntero_2 = list + strlen(list) - 1;
    char noInvert = *puntero_2;
    do
    {
        if (noInvert != '\0')
        {
            puntero_2--;
            printf("%c", noInvert);
            noInvert = *puntero_2;
        }
        else
        {
            puntero_2--;
        }
    } while (puntero_2 >= puntero_1);
    printf("\n");
}
void concreteStrategyB_ctor(concreteStrategyB *this)
{
    istrategy_ctor((istrategy*)this);
    this->strategyB.Algoritmo_1 = Algoritmo1B;
}
void concreteStrategyB_dtor(concreteStrategyB *this)
{
    istrategy_dtor((istrategy*)this);
}
