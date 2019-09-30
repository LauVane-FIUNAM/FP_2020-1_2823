#include <stdio.h>

int main() {

	//Declaramos variables a leer
	int numeroEntrada;
	double realEntrada;

	//Asignamos variables
	int numeroEntero = 32768;
	char caracter = "B";
	float numeroReal = 89.8;

	//Mostramos texto y valores
	printf("Primero texto solo\n");
	printf("Luego podemos poner un entero: %i\n", numeroEntero);
	printf("Tambien podemos poner un caracter: %C\n", caracter);
	printf("Y un numero real: %.2f\n", numeroReal);

	//leemos valores
	scanf("%i", &numeroEntrada);
	scanf("%lf", &realEntrada);

	//Y ahora podemos mostrarlos tambien
	printf("Tu entero: %i\n", numeroEntrada);
	printf("Tu real: %.3lf\n", realEntrada);£

	return 0;
}	
