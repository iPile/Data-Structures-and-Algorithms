//
//  myStack.c
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-15.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "myStack.h"

int isFull (Stack* st){
    int result = 0;
    // Control de puntero NULL
    if(st == NULL){
        fprintf (stderr, "NULL pointer passed to isFull().\n");
    }
    else{
        // esta lleno cuando top+1 = capacidad
        if((st -> top + 1) == st -> capacity){
            result = 1;
        }
    }
    return result;
}

int isEmpty(Stack* st){
    int result = 0;
    if(st == NULL){
        fprintf (stderr, "NULL pointer passed to isEmpty().\n");
        result = 1;
    }
    else{
        //esta vacío cuando top=-1
        if( st-> top == -1){
            result = 1;
        }
    }
    return result;
}

int sizeOfStack(Stack* st){
    int result = 0;
    if(st == NULL){
        fprintf (stderr, "NULL pointer passed to sizeOfStack().\n");
    }
    else{
        //el numero de elementos en el stack es igual a top+1
        result = st->top + 1;
    }
    return result;
}

Stack* getNewStack (unsigned int size){
    Stack* newStack = NULL;
    //Procedemos solo si size > 0
    if (size > 0){
        /*presten atención aquí cómo se reserva memoria para el struct + para el array*/
        newStack = (Stack*) malloc(sizeof(Stack) + size*sizeof(int));
        //Control si malloc no funcionó
        if(newStack == NULL){
            fprintf (stderr, "Error creating a new Stack with malloc.\n");
        }
        else{
            newStack->top = -1;
            newStack->capacity = size;
        }
    }
    
    return newStack;
}

int stackDelete(Stack** st){
    int status = 0;
    if(*st == NULL){
        fprintf (stderr, "NULL pointer passed to stackDelete().\n");
    }
    else{
        //liberamos la memoria reservada y dejamos el puntero a NULL
        /*es por eso que necesitamos aquí usar doble puntero*/
        free(*st);
        *st = NULL;
        status = 1;
    }
    return status;
}

int push(Stack* st, Nodo nd){
    int status = 0;
    if(isFull(st)){
        fprintf (stderr, "Could not push item. Stack is Full.\n");
    }
    else {
        st -> top++;
        st -> array [ st -> top] = nd;
        status = 1;
    }
    return status;
}

Nodo* pop(Stack* st){
    Nodo* result;
    if(isEmpty(st)){
        result = &((Nodo) { });
    }
    else{
        result = &st -> array[st -> top];
        st -> top--;
    }
    return result;
}

int stackPrint(Stack* st){
    Stack* st_temp = NULL;
    int result = 0;
    //Procedemos solo si st no esta vacia; isEmpty() también controla si st = NULL
    
    if(!isEmpty(st)){
        st_temp = getNewStack( st -> capacity);
        /*Imprimir mientras vamos sacando y guardando a st_temp*/
        
        while(!isEmpty(st)){
            int st_top = st -> top;
            Nodo* tmp = pop(st);
            char* nombre = tmp->nombre;
            char* apellido = tmp->apellido;
            int nota = tmp->nota;
            push(st_temp, *tmp);
            printf("Nombre: %s\tApellido: %s\tNota: %d\t nodo en posición %d\n", nombre, apellido, nota, st_top);
        }
        printf("\n");
        /*volvemos a dejar todo en el orden en el que estaba*/
        while(!isEmpty(st_temp)){
            Nodo* tmp = pop(st_temp);
            push(st, *tmp);
        }
        result = 1;
    }
    
    return result;
}
