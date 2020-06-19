//
//  myABB.c
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-18.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "myABB.h"

Nodo* getNewNode (char nombre[NLEN], char apellido[NLEN], int nota, Nodo* leftNode, Nodo* rightNode) {
    Nodo* newNode = (Nodo*) malloc(sizeof (Nodo));
    if (newNode == NULL) {
        fprintf (stderr, "Error creating a new object with malloc.\n");
    }
    else {
        strcpy(newNode -> nombre, nombre);
        strcpy(newNode -> apellido, apellido);
        newNode -> nota = nota;
        newNode -> previous = leftNode;
        newNode -> next = rightNode;
    }
    
    return newNode;
}

Nodo* insertNode (Nodo** nodeRef, char nombre[NLEN], char apellido[NLEN], int nota) {
    Nodo* newNode = *nodeRef;
    
    if(*nodeRef == NULL) {
        *nodeRef = getNewNode(nombre, apellido, nota, NULL, NULL);
        newNode = *nodeRef;
    }
    
    else if (nota < (*nodeRef) -> nota) {
        newNode = insertNode(&((*nodeRef) -> previous), nombre, apellido, nota);
    } else {
        newNode = insertNode(&((*nodeRef) -> next), nombre, apellido, nota);
    }
    return newNode;
}



int height(Nodo* node)
{
    if (node == NULL)
        return 0;
    else
    {
        int lheight = height(node -> previous);
        int rheight = height(node -> next);
        
        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
} 

void destroyABB(Nodo* node) {
    if(node != NULL){
        destroyABB(node -> previous);
        destroyABB(node -> next);
        free(node);
    }
    return;
}

void showABBMinMax(Nodo* node) {
    if (node != NULL) {
        showABBMinMax(node -> previous);
        printf("Nombre: %s\tApellido: %s\tNota: %d\n", node -> nombre, node -> apellido, node -> nota);
        showABBMinMax(node -> next);
    }
}

void showABBMaxMin(Nodo* node) {
    if (node != NULL) {
        showABBMaxMin(node -> next);
        printf("Nombre: %s\tApellido: %s\tNota: %d\n", node -> nombre, node -> apellido, node -> nota);
        showABBMaxMin(node -> previous);
    }
}

