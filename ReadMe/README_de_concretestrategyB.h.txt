Definimos la estructura en la cual creameros una metodo de tipo istrategy
typedef struct
{
    istrategy strategyB;

} concreteStrategyB;
-Aquí estarán las funciones declaradas que se usaran en el archivo .c, una de tipo concreteStrategyB, el contrcutor, el destructor y el inversor
concreteStrategyB *new_concreteStrategyB();
void concreteStrategyB_ctor(concreteStrategyB*);
void concreteStrategyB_dtor(concreteStrategyB*);
void invert (char*);