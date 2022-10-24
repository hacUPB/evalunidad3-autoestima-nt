#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "context.h"

context context_new()
{
    return(context*)malloc(sizeof(context));
}

void context_ctor(context* this, void* istrategy)
{
    this->istrategy = (interface*)istrategy;

    this->nombre = malloc(sizeof(char[20]));

    strcpy(this->nombre,"");
}

void context_dtor(context* this)
{
   free(this->nombre);
}

void SetStrategy(context* this, void* istrategy)
{
    this->istrategy = (istrategy*)istrategy;
}

void DoSomeBusinessLogic(context* this)
{
    this->istrategy->Algoritmo_1(this->nombre);
}
