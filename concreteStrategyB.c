#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "concreteStrategyB.h"
#include "Context.h"

concreteStrategyB_ctor *nuevaestrategiaB()
{
    return (concreteStrategyB*)malloc(sizeof(concreteStrategyB));
}

void algortimB(void * nombre)
{

    printf("Contexto: Imprimimos los datos pero invertidos:");


    char* lista = malloc(sizeof(char[15]));


    strcpy(lista,(char*)nombre);
    Reverse(lista);

    free(lista);

}

void Reverse (char * lista)
{
    char *ptr1, *ptr2;
    ptr1 = lista;
    ptr2 = lista + strlen(lista) - 1;

    char NInver = *ptr2;
    do
    {

        if (NInver != '\0')
        {

            ptr2--;

            printf("%c", NInver);

            NInver = *ptr2;
        }
        else
        {

            ptr2--;
        }

    } while (ptr2 >= ptr1);
    printf("\n");
}

void ctorEstrategiaB(estrategiaB *this)
{

    ctorInterfaz((Interfaz*)this);


}

void dtorEstrategiaB(estrategiaB *this)
{
    dtorInterfaz((Interfaz*)this);
}
