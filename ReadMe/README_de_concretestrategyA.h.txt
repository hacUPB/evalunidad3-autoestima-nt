Definimos la estructura en la cual creameros una metodo de tipo istrategy
typedef struct
{
    istrategy strategyA;

} concreteStrategyB;
-Aquí estarán la estructura declarada que se usaran en el archivo .c, esos metodos seran lo siguientes:
concreteStrategyA *new_concreteStrategyA();
void concreteStrategyA_ctor(concreteStrategyA*);
void concreteStrategyA_dtor(concreteStrategyA*);
