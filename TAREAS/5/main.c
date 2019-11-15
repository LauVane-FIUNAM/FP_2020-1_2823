#include <stdio.h> //Libreria
#include <stdlib.h>// Libreria

int valor(char n){ //funcion principal 
	int z;// Declara variable 
	switch(n){ //Se utiliza switch por que pueden haber varios casos de entrada
	case 'J'://entrada con valor J

	       z=10;//salida 10
	       break;//abandona caso J
	case 'Q'://entrada con valor Q

	     z=10;//salida 10
	     break;//abandona caso
	case 'K'://entrada

	     z=10;//salida
	     break;//abandona caso
	case 'A':

	     z=11;
	     break;
	case 'j':

	     z=10;
	     break;
	case 'q':

	     z=10; 
	     break;
	case 'k':

	     z=10;
	     break;
	case 'a':
	     z=11;
	     break;
	   
  }
  return z;//La ejecucion abandona la funcion

 }
int main(int argc,char* argu[]){//Funcion principal con argumentos
	int imprimir,//resultado que se va a imprimir
	coi; //coi significa char o int
	for(int i=1;i<argc;i++){//se empieza a recorrer la listaen el subindice 1
		coi=argu[i][0]=='J'||argu[i][0]=='j'||
		argu[i][0]=='Q'||argu[i][0]=='q'||argu[i][0]=='K'
		||argu[i][0]=='k'||argu[i][0]=='A'||argu[i][0]=='a';//Dependiendo de la entrada coi va a tener un valor booleano
		if (coi==1){// condiciona si coi es igual a 1
			imprimir=valor(argu[i][0]); // da resultado
		}
		else{ //sino basta con un atoi
			imprimir=atoi(argu[i]);//da resultado
		}
		printf("%i\n",imprimir);//imprime resultado
	}
	return 0;//La ejecucion abandona la funcion
}