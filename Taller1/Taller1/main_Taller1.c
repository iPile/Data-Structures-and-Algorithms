/* 
 * @file    : template_Taller1.c
 * @author  : Ioannis Vourkas
 * @date    : 23/04/2020
 * @brief   : Template de código para Taller 1 - ELO 320
 */
 
#include <stdio.h>
#include <stdlib.h>
#include "calculadora_Taller1.h"

#define SIZE 15

int array[SIZE];
 
int main(){
  //Mensaje de bienvenida
  puts("Inicio del programa de Taller 1\n");
     

  /*Mostrar ejemplos de su implementación*/
  float f1, *pf = NULL;
  printf("sumar() retornó %d\n",sumar(1.3, -4.5, pf));
  printf("sumar() retornó %d\n",sumar(1.3, -4.5, &f1));
  printf("El resultado de sumar(%f, %f) es %f\n",1.3, -4.5, f1);
  puts("-------------------------\n");
  
  
  initArray(array, SIZE, 500);
  printArray(array, SIZE);
    

  //Mensaje de salida
  puts("Termino del programa de Taller 1");
  
  getchar();
  return 0;
 }
