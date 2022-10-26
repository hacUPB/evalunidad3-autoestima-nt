#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include
"concreteStrategyA.h"
#include "context.h"
Instanciar concreteStrategyA
concreteStrategyA *new_concreteStrategyA()
"Reservamos el tamaño de concreStrategyA" y retornamos un puntero a concreteStrategyA
return(concreteStrategyA*)malloc(sizeof(concreteStrategyA));
}
"Se crea AlgoritmolA el cual es especifico de void AlgoritmolA(void * nombre)
concretestrategyA"
{
"Imprimimos el mensaje que nos entrega el codigo de c#"
printf("Context:Sorting data using the strategy (not sure how it'11 do it)\n");
"Se crea un puntero que reserve un espacio de memoria char 20 para la cadena de caracteres"
char *res -malloc(sizeof(char[20]));
"Le añadimos el resultado a la varible nombre"
Strcpy res, (char*)nombre);
"Imprimimos el resultado
printf("%s" res);
printf("\n");
"Liberamos el espacio de memoria"
free(res);
}
void concreteStrategyA_ctor(concreteStrategyA *this)
{
"Enviamos la variable istrategy con un puntero para que genere el constructor del istrategy"
istrategy_ctor((istrategy*)this);
this-›strategyA.Algoritmo_1 = Algoritmo1A;
}