/* 
 * @file    : calculadora_Taller1.h
 * @author  : Ioannis Vourkas
 * @date    : 23/04/2020
 * @brief   : Template de código para Taller 1 - ELO 320
 */
 
#ifndef CALCULADORA_T1_H
#define CALCULADORA_T1_H

/**
 * @name    	: int sumar(float op1, float op2, float* res)
 * @param op1 	: primer parametro a sumar
 * @param op2 	: segundo parametro a sumar
 * @param res	: dirección de la variable que almacena el resultado de la suma
 * @return  	: retorna -1 si res es NULL, o 0 en c.o.c.
 */
int sumar(float op1, float op2, float* res);

/**
 * @name    	: int restar(float* minu, float subs)
 * @param minu	: dirección de la variable que representa el minuendo de la resta
 * @param subs	: parametro que representa el sustraendo de la resta
 * @return  	: retorna -1 si minu es NULL, o 0 en c.o.c.
 */
int restar(float* minu, float subs);

/**
 * @name	: unsigned int multiplicar(unsigned int op1, unsigned int op2, unsigned int* res)
 * @param op1	: primer parametro a multiplicar
 * @param op2	: segundo parametro a multiplicar
 * @param res	: dirección de la variable que almacena el resultado de la multiplicación
 * @return  	: retorna -1 si res es NULL, o retorna 0 en c.o.c.
 */
int multiplicar(unsigned int op1, unsigned int op2, unsigned int* res);

/**
 * @name    	: int dividir(unsigned int D, unsigned int d, unsigned int* co, unsigned int* re)
 * @param D	: parametro que representa el Dividendo de la división D/d
 * @param d	: parametro que representa el divisor de la división D/d
 * @param co	: dirección de la variable que almacena el cociente de la división D/d
 * @param re	: parametro que representa el resto de la división D/d
 * @return  	: retorna -1 si co es NULL o si re es NULL, o si d = 0, o retorna 0 en c.o.c.
 */
int dividir(unsigned int D, unsigned int d, unsigned int* co, unsigned int* re);

/**
 * @name    	: int initArray (int array[], unsigned int size)
 * @param array : arreglo unidimensional a llenar con valores aleatorios en el rango de "1" a "limit"
 * @param size  : el numero de elementos del array
 * @param limit : el limite superior del rango de valores a crear aleatoriamente
 * @return      : retorna -1 si array es NULL, o 0 en c.o.c.
 */
int initArray (int array[], unsigned int size, unsigned int limit);

/**
 * @name    	: int sortArray (int array[], unsigned int size)
 * @param array : arreglo unidimensional a ordenar de menor a mayor
 * @param size  : el numero de elementos del array
 * @return      : retorna -1 si array es NULL, o 0 en c.o.c.
 */
int sortArray (int array[], unsigned int size);

/**
 * @name    	: int printArray (int array[], unsigned int size)
 * @param array : arreglo unidimensional a imprimir
 * @param size  : el numero de elementos del array
 * @return      : retorna -1 si array es NULL, o 0 en c.o.c.
 */
int printArray (int array[], unsigned int size);

/**
 * @name    	: int minmaxArray (int array[], unsigned int size, int* min, int* max)
 * @param array : arreglo unidimensional donde se busca el valor mínimo y el máximo
 * @param size  : el numero de elementos del array
 * @param min   : direccion de la variable que almacena el valor mínimo en el array
 * @param max   : direccion de la variable que almacena el valor máximo en el array
 * @return      : retorna -1 si array o min o max es NULL, o 0 en c.o.c.
 */
int minmaxArray (int array[], unsigned int size, int* min, int* max);

#endif	// CALCULADORA_T1_H
