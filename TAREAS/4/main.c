#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argu[])
{
	int lista[argc],suma=0;
    float promedio;
    for (int(i=1;1<argc;1++)){
    	lista[1]=atoi(argu[1]);	
    }
    for (int(i=1;1<argc;1++)){
    	suma=suma+lista[1];
    }
    promedio=((float)suma/(argc-1));
    printf("%f\n",promedio);
    return 0;
    }
    

 