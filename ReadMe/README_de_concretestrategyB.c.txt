Primero declaramos el espacio de memoria tamaño del stretegyA y tiramos un return de regreso al stretegyA
concreteStrategyB *new_concreteStrategyB()
{
    return (concreteStrategyB*)malloc(sizeof(concreteStrategyB));
}
creamos el algoritmo que lo usaremos mas tarde, el cual contenga un texto especifico para el, una lista de caracteres que determine tambien el tamaño de la lista, lo asociamos con el invert y luego lo liveramos
void Algoritmo1B(void * name)
{
    printf("Contexto: Imprimimos los datos pero invertidos:");
    char* lista = malloc(sizeof(char[15]));
    strcpy(lista,(char*)name);
    invert(lista);
    free(lista);
}
usamos el invert, donde puntero_1 es la cabeza y el puntero_2 la cola, entonces en el caso que noInvert sea direferente de /0, invertimos lso caracteres, en el caso que no, seguimos buscando, bucle se termina cuando el puntero_2 es mayor que el puntero_1
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
Usamos el contrcutor para que parametrice el contrcutor para el main y le damos el algotimo ahora a Algoritmo1B
void concreteStrategyB_ctor(concreteStrategyB *this)
{
    istrategy_ctor((istrategy*)this);
    this->strategyB.Algoritmo_1 = Algoritmo1B;
}
y luego usamos el contrcutor para liberar memoria
void concreteStrategyB_dtor(concreteStrategyB *this)
{
    istrategy_dtor((istrategy*)this);
}
