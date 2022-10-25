-Declaramos el context ubicado en el .h para que pueda funcionar el
context pada declarar que guarde un espacio de memoria context_new()
{
    return(context)malloc(sizeof(context));
}

-Hacemos un constructor para con 2 punteros relacionados al istrategy y poder copiar el nombre del strategy
void context_ctor(context *this, void *interface)
{
    this->interface = (istrategy*)interface;
    this->nombre = malloc(sizeof(char[20]));
    strcpy(this->nombre,"a,b,c,d,e");
}

-Creamos el destructor para liberar el espacio de memoria del nombre del strategy
void context_dtor(context *this)
{
   free(this->nombre);
}

-ingresamos una funcion con 2 punteros de tipo context y un void para definir e ingresar el tipo de estartegia
void SetStrategy(context *this, void *interface)
{
    this->interface = (istrategy*)interface;
}

-Por ultimo creamos el una ultima funcion que haga uso de Algoritmo1 segun istrategy en funcion del nommbre
void DoSomeBusinessLogic(context *this)
{
    this->interface->Algoritmo_1(this->nombre);
}

