-Creamos un puntero que sea void
typedef void (*Algoritmo)(void *);

-Definimos la estructura que será para la interfaz 
typedef struct
{
    Algoritmo Algoritmo_1;
    
} istrategy ; 

-Aquí estarán las funciones que se usaran en el archivo .c