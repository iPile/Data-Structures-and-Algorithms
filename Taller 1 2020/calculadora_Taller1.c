/* 
 * @file    : calculadora_Taller1.c
 * @author  : Ioannis Vourkas
 * @date    : 23/04/2020
 * @brief   : Template de código para Taller 1 - ELO 320
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "calculadora_Taller1.h"

int sumar(float op1, float op2, float* res){
    /* Ejemplo*/
    if (res == NULL) return -1;
    
    *res = op1 + op2;
    
    return 0;
}

int restar(float* minu, float subs){
    /* Llenar con su código*/
    
    return 0;
}

int multiplicar(unsigned int op1, unsigned int op2, unsigned int* res){
    if(!res) return -1;
    
    *res = 0;
        
    for(int i = 1 ; i<= op2; i++){
        sumar(op1, *res, res);
    }
    
    return 0;
}

int dividir(unsigned int D, unsigned int d, unsigned int* co, unsigned int* re){
    /* Llenar con su código SIN usar D/d
     * En lugar de eso, utilice la función restar() para restar
     * d de D continuamente incrementando co hasta encontrar D < 0.
     * El resto de la división re es entonces D + d.
     */
    
    if (!re) return -1;
    
    return 0;
}

int initArray (int array[], unsigned int size, unsigned int limit){
    /* Llenar con su código. Leer aqui para uso de rand()
     * https://www.cplusplus.com/reference/cstdlib/rand/
     */
    
    for (int i = 0; i < size; i++) {
        array[i] = rand() % limit;
    }
    
    return 0;
}

int sortArray (int array[], unsigned int size){
    for (int i = 1; i < size + 1; i = i + 1) {
        if (array[i] > array[i+1]){
            array[i] = array[i+1];
            array[i+1] = array[i];
        }
    }
    
    if (!array) return -1;

    return 0;
}

int printArray (int array[], unsigned int size){
    if (array == NULL) return -1;

    printf("{");
    
    for (unsigned int i = 1;i <= size ;i++){
        printf("%d",array[i]);
        if (i != size)
            printf(",");
    }
    
    printf("}\n");
    
    return 0;
}

int minmaxArray (int array[], unsigned int size, int* min, int* max){
    if (size == 1) {
        min = &array[0];
        max = &array[0];
        return 0;
    }
    
    sortArray(array, size);
    
    int tempArray[] = { array[0], array[1] };
    
    for (int i = 2; i < size; i++)
    {
        if (array[i] < tempArray[0])
            tempArray[0] = array[i];
        
        else if (array[i] > tempArray[1])
            tempArray[1] = array[i];
    }
    
    *min = tempArray[0];
    *max = tempArray[1];
    
    if(!min || !max) {
        return -1;
    }
    
    return 0;
}
