#include <stdio.h>
int main ()
{
	int a;
	printf("Dame un numero: \n");
	scanf ("%d", &a);
	while (a>=0)
	{
	printf("Dame un numero: \n");
	scanf ("%d", &a);
	}
	printf("Negativo, %d \n", a);
	return 0;
}
