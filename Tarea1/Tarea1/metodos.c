//
//  metodos.c
//  Tarea1
//
//  Created by Ignas Pileckas on 2020-06-15.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "metodos.h"

char* encryptString(char* str) {
    int i,poly[26],x,k;
    
    char encrypcion[200] = "";
    char buffer[20];
    
    x = 0;
    k = 11;
    
    for (i = 0; i <= 25; i++) {
        if(i <= 8) {
            if(i%5 == 0 && i!=0) {
                k += 5;
                poly[x] = k++;
            }
            else {
                poly[x] = k++;
            }
        }
        if(i >= 10) {
            if(i%5 == 0 &&i != 0) {
                poly[x] = k++;
                k+=5;
            } else {
                poly[x] = k++;
            }
        }
        if(i == 9) {
            poly[x] = 24;
        }
        x++;
    }
    
    i = 0;
    
    while(str[i] != '\0') {
        if(!((str[i] >= 0&& str[i] <= 31) || (str[i] >= 33 && str[i] < 65) || (str[i] > 90 && str[i] < 97) || (str[i] > 122 && str[i] <= 127))) {
            if(str[i] >= 'A' && str[i] <= 'Z') {
                int num = poly[str[i] - 'A'];
                snprintf(buffer, 6, "%d", num);
                strncat(encrypcion, buffer, 2);
            }
            if(str[i] >= 'a' && str[i] <= 'z') {
                int num = poly[str[i] - 'a'];
                snprintf(buffer, 6, "%d", num);
                strncat(encrypcion, buffer, 2);
            }
        }
        
        if(str[i] == ' ') {
            printf("%c", str[i]);
        }
        i++;
    }
    printf("\n");
    
    return encrypcion;
}

FILE* openFile(FILE* fptr) {
    char fileName[300];
    
    printf("Nombre del archivo: ");
    scanf("%s", fileName);
        
    if ((fptr = fopen(fileName, "r")) == NULL) {
        printf("Archivo no existe\n");
        exit(1);
    }
    
    return fptr;
    
}

void readfile(FILE* fptr, Stack* stack) {
    const char coma[2] = ",";
    char lineaTexto[150];
    char nombre[NLEN];
    char apellido[NLEN];
    int nota = 0;
    char *palabra;
    
    while(fscanf(fptr, "%s", lineaTexto) != EOF) {
        palabra = strtok(lineaTexto, coma);
        
        strcpy(nombre, encryptString(palabra));
        palabra = strtok(NULL, coma);
        
        strcpy(apellido, encryptString(palabra));
        palabra = strtok(NULL, coma);
    
        nota = atoi(palabra);

        Nodo nodo;
        
        strcpy(nodo.nombre, nombre);
        strcpy(nodo.apellido, apellido);
        nodo.nota = nota;
        
        push(stack, nodo);
        
        strcpy(nombre, "");
        strcpy(apellido, "");
        nota = 0;
    }
}
