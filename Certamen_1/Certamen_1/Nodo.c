//
//  Nodo.c
//  Certamen_1
//
//  Created by Ignas Pileckas on 2020-06-19.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdlib.h>
#include "Nodo.h"

void insert(int num, struct node** nodeRef) {
    struct node* nuevoNodo = *nodeRef;
    
    if(nuevoNodo == NULL) {
        *nodeRef = newNode(num);
        nuevoNodo = *nodeRef;
    }
    
    else if (num < (*nodeRef) -> number){
        nuevoNodo = (*nodeRef) -> left;
    }
    
    else if (num > (*nodeRef) -> number){
        nuevoNodo = (*nodeRef) -> right;
    }
}

struct node* newNode(int num) {
    struct node* temp =  (struct node *)malloc(sizeof(struct node));
    
    temp -> number = num;
    temp -> left = temp -> right =  NULL;
    return temp;
}

void printLevelOrder(struct node* node)
{
    int h = treeHeight(node);
    int i;
    for (i=1; i<=h; i++)
        printGivenLevel(node, i);
}
  
void printGivenLevel(struct node* node, int level)
{
    if (node == NULL)
        return;
    if (level == 1)
        printf("%d ", node -> number);
    else if (level > 1)
    {
        printGivenLevel( node -> left, level-1);
        printGivenLevel( node -> right, level-1);
    }
}

int treeHeight(struct node* node)
{
    if (node==NULL)
        return 0;
    else
    {
        int leftHeight = treeHeight(node -> left);
        int rightHeight = treeHeight(node -> right);
  
        if (leftHeight > rightHeight)
            return(leftHeight + 1);
        else return(rightHeight + 1);
    }
}
