//
//  main.c
//  Certamen_1
//
//  Created by Ignas Pileckas on 2020-06-19.
//  Copyright © 2020 Ignas Pileckas. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Nodo.h"

int main(int argc, const char * argv[]) {

    
    
    return 0;
}


// Pregunta 1
// a) No
// b)
// Mejor:
//                1
//             /       \
//           2           3
//        /    \       /   \
//       4      5     6     7
//     /   \  /
//    8    9  10

// Peor:
        //              1
        //           /
        //          2
        //        /
        //       4
        //     /
        //    8
//           /
//         3
//        /
//       6
//     /
//    7
//   /
//   5

// c) Para que en cualquier momento podriamos hacer un pop()


// Pregunta 2
// El mejor seria 7 porque es el primer elemento del Array y no tenemos que correr todo el ciclo for (solo una vez)

// El peor será cualquier numero que no tiene el Array o el numero 4 (el ultimo valor del array) porque en ambos casos vamos a correr todo el ciclo for por 10 veces


// Pregunta 3
// a) La profundidad del árbol es 5
// b) Por le numero 10 retorna solo el Tree-Minimum (12):
//    Por el numero 40 retorna el Tree-minimum (45) y tambien retorna 25
// x = 40
// y = x.p
// y = 48
// x = y (x = 48)
// y = y.p
// y = 25
// return y

// c) archivos Nodo.h y Nodo.c funcion void insert();

// d) Postorder se imprima en 1,8,15,45,50,5,12,28,38,48,10,22,30,40,20,36,25

// e) Archivos Nodo.h y Nodo.c funcion printLevelOrder


// Pregunta 4
// s2.push(s1.pop()), s2.push(s1.pop()), s3.push(s1.pop()), s3.push(s2.pop()), s3.push(s1.pop()), s3.push(s2.pop())


