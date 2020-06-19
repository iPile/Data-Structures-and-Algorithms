//
//  metodos.h
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-15.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#ifndef metodos_h
#define metodos_h

#include "myStack.h"

/**
* @brief       : pregunta por el nombre del archivo y abre si encuentra uno
* @param fptr   : el puntero del archivo
*/

FILE* openFile(FILE* fptr);

/**
* @brief       : lee los contenidos del archivo y agrega el contenido encriptado al stack
* @param fptr   : el puntero del archivo
* @param stack   : el puntero del stack donde se agrega los contenidos encriptados
*/

void readfile(FILE* fptr, Stack* stack);

/**
* @brief       : encripta el string con la encrypcion de 'Cuadrado de Polibio'
* @param str   : el puntero del string
*/

char* encryptString(char* str);

#endif 
