#include <stdio.h>
int main ()
{
	int num, m = 0, imp;
	printf("Dame un numero limite para conocer los impares en la lista: \n");
	scanf ("%d", & num );
	printf:("Los numeros impares son: \n");
	while (m<=num)
	{
		if (m%2!=0)
		{
			printf("%d\n", m);
		}
		m++;
	}
	return 0;
}
