#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyB.h"
#include "context.h"

concreteStrategyB *nuevaestrategiaB()
{
    return (concreteStrategyB*)malloc(sizeof(concreteStrategyB));
}

void Algoritmo1B(void * nombre)
{
    printf("Contexto: Imprimimos los datos pero invertidos:");


    char* lista = malloc(sizeof(char[15]));


    strcpy(lista,(char*)nombre);
    Reverse(lista);

    free(lista);
}

void invert (char * lista)
{
    char *puntero_1, *puntero_2;
    puntero_1 = lista;
    puntero_2 = lista + strlen(lista) - 1;

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

