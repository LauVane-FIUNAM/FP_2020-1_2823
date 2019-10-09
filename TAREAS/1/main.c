#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argu[])
{
	char *palabra;
	for (int i=1;i<argc;i++){
		palabra=argu[i];
		printf("%s\n", palabra);
	}
	return 0;
}
