#include <stdio.h>
#include <stdlib.h>

/* Se crea la función principal que creara una matriz aleatoria del tamaño ingresado por el usuario, luego
 * la modificara con fines visuales a valores menores a 100, y finalmente la recorrera para obtener los elementos
 * de la diagonal y sumarlos dentro de uan variable destinada para esto */

int main() {
	
	int Tamaño, i, j;

	// Se solicita el tamaño de la matriz y se asigna el valor a la variable Tamaño

	printf("Ingrese el tamaño de su matriz cuadrada: ");
	scanf("%d", &Tamaño);

	int matriz[Tamaño][Tamaño];
	
	// Se modifica la matriz con valores menores a 100 para fines visuales

	for (i = 0; i < Tamaño; i++) {
                for (j = 0; j < Tamaño; j++) {
                         matriz[i][j] = rand() %100;
		}
	}
	
	// Se crea la variable que almacena la suma de la diagonal

	int suma_diag = 0;

	// Se imprime la matriz y si se encuentra un elemento de la diagonal, se adicional a la variable suma_diag

	for (i = 0; i < Tamaño; i++) {
		printf("[");
		for (j = 0; j < Tamaño; j++) {
			printf(" [%d] ", matriz[i][j]);
			if (i == j)
				suma_diag = suma_diag + matriz[i][j];
		}
		printf("]\n");
	}

// Se imprime el resultado

printf("La suma de los elementos de la diagonal de la matriz es %d \n", suma_diag);

}
