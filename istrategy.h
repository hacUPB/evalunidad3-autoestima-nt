#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

typedef void (*Algoritmo)(void *);

typedef struct
{
    Algoritmo Algoritmo1;
    
} istrategy ; 

istrategy *istrategy_new();
void istrategy_ctor(istrategy*);
void istrategy_dtor(istrategy*);
char* Fcion(istrategy*);
#endif
