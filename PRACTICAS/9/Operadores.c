#include <stdio.h>

int main() {

	int dos,tres,cuatro,cinco;
	double resultado;

	dos = 2;
	tres = 3;
	cuatro = 4;
	cinco = 5;

	resultado = cinco/dos;
	printf("5 / 2 = %.1lf\n", resultado);

	resultado = (double)cinco/dos;
	printf("5 / 2 = %.1lf\n", resultado);

	return 0;
}	