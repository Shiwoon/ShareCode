#include <stdio.h>
 
int CalcularProductoDigito(int num)
{//Calcula el producto de los digitos de la variable num
  int producto = 1;
  int digito;
	while(num > 0)
	{
		digito = num%10;
		producto *= digito;
		num /= 10;
	}
	return producto;
}
int Persistencia(int num)
{//Cuenta cuantas veces realiza el mismo procedimiento
	int Cont = 0;
	while(num > 9)
	{
		num = CalcularProductoDigito(num);
		Cont++;
	}
	return Cont;
}
int main()
{
	int numero;
	
	printf("Ingrese el numero: ");
	scanf("%d",&numero);
	printf("\n\nLa persistencia es: %d",Persistencia(numero));
 
	flushall();
	getchar();
	return 0;
}
