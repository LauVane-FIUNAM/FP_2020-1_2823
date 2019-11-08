#include <stdio.h>// Biblioteca standard de C
#include<stdlib.h>//Otra libreria que contiene busqueda de arrays y control de procesos

int main(int argc,char* argu[]){// Aqui se menciona la funcion principal y se indica que 
//se brindaran argumentos. argv y argc son la forma en la que los argumentos en linea 
//se pasan a main
    float n1,n2,resultado=1;//resultado que se va a imprimir
    n1= atof(argu[1]);//indica que el argumento 1 representara a n1
    n2= atof(argu[2]);//indica que el argumento 2 representara a n2
    //atof convierte una cadena de caracteres a float
    
    for(int a=1;a<=n2;a++){//declara variable de control a=1, el bucle de continuacion a<= n2
    	// y el incremento de a++
        resultado=resultado*n1; //se genera el resultado
    }
    printf("%.2f",resultado); //se imprime el resultado para que se muestre en pantalla
    return 0;//provoca que la ejecucion abandone la funcion main
}