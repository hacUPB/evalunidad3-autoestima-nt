#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "istrategy.h"

istrategy *istrategy_new()
{
    return (istrategy*)malloc(sizeof(istrategy));
}
void Algoritmovoid(void *nombre)
{
    char * resultado = malloc(sizeof(char[20]));
    strcpy(resultado,"No hay strategy");
    printf("%s", resultado);
    free(resultado);
}
void istrategy_ctor(istrategy* this)
{
    this->Algoritmo_1 = &Algoritmovoid;
}
void istrategy_dtor(istrategy* this)
{
    free(this);
}
