-Declaramos el istrategy que se encontraba en el .h para así poder usar las funciones
istrategy *istrategy_new()
{
    return (istrategy*)malloc(sizeof(istrategy));
}

-Usamos esta funcion para que traiga el nombre y que retorne nada
void Algoritmovoid(void *nombre)
{

-Se crea un puntero a la cadena de caracteres (max 20)
    char * resultado = malloc(sizeof(char[20]));

-Se copia la cadena de caracteres a este puntero
    strcpy(resultado,"No hay strategy");

-La imprimimos
    printf("%s", resultado);

-Se libera la memoria
    free(resultado);

}


-Aquí se crea el ctor de istrategy
void istrategy_ctor(istrategy* this)
{
-con this* se accede al dato Algoritmo_1 y se da la direccion de Algoritmovoid
    this->Algoritmo_1 = &Algoritmovoid;

}

-El destructor de istrategy para liberar memoria
void istrategy_dtor(istrategy* this)
{
-liberar la memoria de this
    free(this);
}