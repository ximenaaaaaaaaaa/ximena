#include <stdio.h>

/*Suma de dígitos*/

int main()
{
    int numero, suma = 0, digito;

    printf("Ingrese un numero: \n");
    scanf("%d", & numero);

    int numero_original = numero;

    while (numero > 0)
	{
        digito = numero % 10;
        suma += digito;      
        numero /= 10;  
    }

    printf("La suma de los dígitos de %d es: %d\n", numero_original, suma);

    return 0;
}
