#include <stdio.h>

// Este programa recibe un valor al cual se le calculará el factorial y devuelve el resultado al usuario

/* Se crea una función que calcule el factorial, su lógica se basa en la definición del factorial multiplicando
 * todos los números en sucesión desde 1 hasta el valor n. La función devuelve el factorial del valor n*/

int factorial (int n) {

	int i = 1;
	while( n>1 ) {
		i = i * n;
		n = n - 1;
	}
	return i;

}

/* Se crea la función main la cual recibe el valor del usuario y lo envia a la función factorial para conocer el
 * resultado y devolverlo al usuario*/

int main (int argc, char *argv[]) {

	int Valor;
	printf("Ingrese el número del cual desea obtener el factorial: ");
	scanf("%d", &Valor);
	int fac = factorial(Valor);
	printf("%d! = %d\n", Valor, fac);
	return 0;

}

