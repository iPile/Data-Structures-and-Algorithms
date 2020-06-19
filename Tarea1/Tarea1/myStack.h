//
//  myStack.h
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-15.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#ifndef myStack_h
#define myStack_h

#define NLEN 30

typedef struct nd {
    char nombre[NLEN];
    char apellido[NLEN];
    int nota;
    struct nd *previous; 
    struct nd *next;
}Nodo;

typedef struct St {
    int top;
    unsigned int capacity;
    Nodo array[];
}Stack;

/**
 * @brief   : indica si el stack st está lleno
 * @param st : dirección de struct Stack que maneja el Stack
 * @return  : retorna 0 para false y 1 para true
 */
int isFull (Stack* st);

/**
 * @brief   : indica si el stack st está vacio
 * @param st : dirección de struct Stack que maneja el Stack
 * @return  : retorna 0 para false y 1 para true
 */
int isEmpty(Stack* st);

/**
 * @brief       : genera un nuevo stack de capacidad size
 * @param size  : el valor correspondiente a la capacidad del Stack
 * @return      : el puntero al Struct que maneja el Stack, o NULL si algo falló
*/
Stack* getNewStack (unsigned int size);

/**
 * @brief   : elimina el stack y libera la memoria reservada
 * @param st : dirección de struct Stack que maneja el Stack a eliminar
 * @return  : retorna 0 si el stack indicado no existe (NULL) o 1 en c.o.c.
 */
int stackDelete(Stack** st);

/**
 * @brief       : agrega el elemento item al stack st
 * @param st    : dirección de struct Stack que maneja el Stack
 * @param nd  : el número a agregar al stack
 * @return      : retorna 0 si algo falló, o 1 en c.o.c.
 */
int push(Stack* st, Nodo nd);

/**
 * @brief   : quita el primero elemento del stack
 * @param st : dirección de struct Stack que maneja el Stack
 * @return  : retorna el valor en la cima, o INT_MIN si el stacj esta vacio
 */
Nodo* pop(Stack* st);

/**
 * @brief   : imprime los contenidos del stack completo sin modificarlo
 * @param st : dirección de struct Stack que maneja el Stack a imprimir
 * @return  : retorna 0 si el stack está vacio o no existe (NULL), y 1 en c.o.c.
 */
int stackPrint(Stack* st);

#endif /* myStack_h */
