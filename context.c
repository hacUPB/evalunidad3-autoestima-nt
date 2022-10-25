#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "context.h"

context *context_New()
{
    return(context*)malloc(sizeof(context));
}

void context_ctor(context *this, void *interface)
{
    this->interface = (istrategy*)interface;

    this->nombre = malloc(sizeof(char[20]));

    strcpy(this->nombre,"");
}

void context_dtor(context *this)
{
   free(this->nombre);
}

void SetStrategy(context *this, void *interface)
{
    this->interface = (istrategy*)interface;

}

void DoSomeBusinessLogic(context *this)
{
    this->interface->Algoritmo_1(this->nombre);
}
