#include <stdio.h>

int main() {

	int num1, num2, res;
	char c1, c2;

	num1 = 7;
	num2 = 15;
	c1 = "h";
	c2 = "H";

	printf("¿ num1 es menor a num2 ? -> \t%d\n",num1<num2);
	printf("¿ c1 es igual a c2 ? -> \t%d\n",c1==c2);
	printf("¿ c1 es diferente a c2 ? -> \t%d\n",c1!=c2);

	res = num1 < num2 && c1 == "h";
	printf("¿ num1 < num2 Y c1 es igual a "h" ? -> \t%d\n", res);

	res = c1 == "S" || c2 == "H"
	printf("¿c1 es igual a "S" O c2 a "H"? -> \t%d\n", res);

	return 0;
}