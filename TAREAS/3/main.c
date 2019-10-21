#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argu[]){
	float numero,operador,suma,resta,multip,division;
	numero=atof(argu[1]);
	operador=atof(argu[2]);
	suma=numero+operador;
    printf("%.2f\n",suma);
    resta=numero-operador;
	printf("%.2f\n", resta);
	division=numero/operador;
	printf("%.2f\n", division);
	multip=numero*operador;
	printf("%.2f\n",multip);

	return 0;

 }
