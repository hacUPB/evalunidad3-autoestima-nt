-Declaramos el context ubicado en el .h para que pueda funcionar el
contexr *context_new(){

Context *cont = malloc(sizeof(Context));
    return cont;
}

-Hacemos que el constructor del contexto guarde un espacio de memoria para Context
-Usamos una funcion para que traiga el nombre y crear el constructor de context
void SetStrategy(Context* cont, IStrategy* this)
{
    IStrategy* IStrategy=this;
    cont->_strategy=this;
}

