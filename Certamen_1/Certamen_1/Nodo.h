//
//  Nodo.h
//  Certamen_1
//
//  Created by Ignas Pileckas on 2020-06-19.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#ifndef Nodo_h
#define Nodo_h

#include <stdio.h>

struct node
{
  int number;
  struct node* left;
  struct node* right;
};

struct node* newNode(int num);
void insert(int, struct node**);

void printGivenLevel(struct node* node, int level);
int treeHeight(struct node* node);

#endif /* Nodo_h */
