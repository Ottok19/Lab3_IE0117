#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 

/* Este ejercicio encuentra la longitud más larga de 1s consecutivos en una matriz cuadrada, incluyendo
 * saltos entre filas*/

/* Se crea la función que encuentra la longitud más larga de 1s consecutivos, utilizando dos variables como 
 * contadores y comparandolas entre sí para ver si hay una fila de 1s más largas que la anterior. */

int findLargestLine(int matrix[][SIZE]) {
	
	int v1 = 0;
	int v2 = 0;
	int i, j;

/* Se lee la matriz, si encuentra un 1, suma al primer contador por cada 1 y cuando encuentre un 0
 * o llegue al final de la matriz, comparara con el otro contador y si el primero es mayor que el segundo
 * le pasa su valor y vuelve a contar con la siguiente fila de 1s, si encuentra otro 0 o el último elemento
 * compara de nuevo, si es mayor, pasa su valor al segundo contador y se reinicia y si no, solo se reinicia 
 * para volver a contar la siguiente fila de 1s.*/

        for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                        if (matrix[i][j] == 1) {
                                v1 = v1 + 1;
			}
			if (matrix[i][j] == 0 || (i == SIZE - 1) & (j == SIZE - 1)) {
				if (v1 > v2) {
					v2 = v1;
					v1 = 0;
				}
				else {
					v1 = 0;
				}
                		
			}
		}
        }

// Se devuelve el valor de la longitud de 1s consecutivos más grandes

	return v2;
}

// Se crea la función principal la cual crea la matriz y la modifica para que sea de solo 1s y 0s.

int main() {

	int i, j, matrix[SIZE][SIZE];
				
	for (i = 0; i < SIZE; i++) {
                for (j = 0; j < SIZE; j++) {
                         matrix[i][j] = rand() %2;
                }
        }

// Se imprime la matriz para fines visuales

	printf("La matriz sería la siguiente:\n");

	for (i = 0; i < SIZE; i++) {
                printf("[");
                for (j = 0; j < SIZE; j++) {
                        printf(" [%d] ", matrix[i][j]);
                }
                printf("]\n");
        }

// Se llama la función que encuentra la longitud de 1s consecutivos más larga y se imprime el resultado

	int largestLine = findLargestLine(matrix);
	printf("El tamaño de la secuencia de 1s más grande es: %d\n", largestLine);

	return 0;

}
