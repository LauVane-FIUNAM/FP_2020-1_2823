#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argu[])
{
	double lista[argc],suma=0;
    double promedio;
    for (int i=1;i<argc;i++){
    	lista[i]=atof(argu[i]);	
    }
    for (int i=1;i<argc;i++){
    	suma=suma+lista[i];
    }
    promedio=((double)suma/(argc-1));
    printf("%.2f\n",promedio);
    return 0;
    }