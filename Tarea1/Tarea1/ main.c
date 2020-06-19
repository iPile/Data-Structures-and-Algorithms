//
//  main.c
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-14.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "metodos.h"
#include "myStack.h"
#include "myABB.h"

#define NLEN 30

int main(int argc, const char * argv[]) {
    FILE *fptr = NULL;

    Stack* stack = getNewStack(NLEN);
    
    readfile(openFile(fptr), stack);
    fclose(fptr);
    
    stackPrint(stack);
    
    Nodo* ABB_node = NULL;
    
    while(!isEmpty(stack)) {
        Nodo* tempNode = pop(stack);
        insertNode(&ABB_node, tempNode -> nombre, tempNode -> apellido, tempNode -> nota);
        tempNode = NULL;
    }
    
    printf("\nImprimir el ABB de mayor a menor nota\n");
    showABBMaxMin(ABB_node);
    
    printf("\nImprimir el ABB de menor a mayor nota:\n");
    showABBMinMax(ABB_node);
    
    stackDelete(&stack);
    destroyABB(ABB_node);
    
    return EXIT_SUCCESS;
}


