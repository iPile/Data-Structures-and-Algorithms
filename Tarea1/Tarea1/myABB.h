//
//  myABB.h
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-18.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#ifndef myABB_h
#define myABB_h

#include "myStack.h"

/**
* @brief            : crea un nuevo objeto con los datos pasados como argumentos
* @param nombre       : el nombre de estudiante a ingresar al nuevo objeto que entra al ABB
* @param apellido       : el apellido de estudiante a ingresar al nuevo objeto que entra al ABB
* @param nota       : la nota de estudiante a ingresar al nuevo objeto que entra al ABB
* @param leftNode : el valor a asignar al puntero left del nuevo objeto
* @param rightNode : el valor a asignar al puntero right del nuevo objeto
* @return           : retorna un puntero al nuevo objeto creado o NULL si no se pudo crear
*/
Nodo* getNewNode (char nombre[NLEN], char apellido[NLEN], int nota, Nodo* leftNode, Nodo* rightNode);

/**
* @brief           : agrega un nuevo objeto con número num al ABB que empieza en *objectRef
* @param nodeRef : la dirección del puntero a la raíz del subarbol ABB donde agregar el num
* @param nombre       : el nombre de estudiante a ingresar al nuevo objeto que entra al ABB
* @param apellido       : el apellido de estudiante a ingresar al nuevo objeto que entra al ABB
* @param nota       : la nota de estudiante a ingresar al nuevo objeto que entra al ABB
* @return          : retorna el puntero al nuevo objeto, o NULL si no se pudo crear
*/

Nodo* insertNode (Nodo** nodeRef,  char nombre[NLEN], char apellido[NLEN], int nota);

/**
* @brief       : imprima todo el contenido del ABB de mayor a menor nota
* @param node   : el puntero al nodo donde empieza el ABB
*/

void showABBMinMax(Nodo* node);

/**
* @brief       : imprima todo el contenido del ABB de menor a mayor nota
* @param node   : el puntero al nodo donde empieza el ABB
*/

void showABBMaxMin(Nodo* node);

/**
* @brief       : elimina el arbol completo
* @param node   : el puntero al nodo donde empieza el ABB
*/

void destroyABB(Nodo* node);


#endif /* myABB_h */
