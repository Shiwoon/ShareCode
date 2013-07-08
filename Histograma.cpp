#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int Random(int a,int b)
{
  return (rand() % (b-a)) + a;
}
//---  Genera numeros aleatorios
void MostrarFrecuencia(int TOPE,int* Vec)
{
	printf("\n\n");
	for(int i = 0;i <= 10;i++)
	{
		printf("%2d %2d ",i,Vec[i]);
		for(int j = 1;j <= Vec[i];j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
//---	Muestra la frecuencia con el grafico
int main()
{//	MAX es el tamaño del vector
	static const int MAX = 100;
	int ne;
	int Vec[100] = {0};
		
	srand (time(NULL));
	
	printf("Cantidad de personas encuestadas: ");
	scanf("%d",&ne);
	
	for(int i = 0;i < ne;i++)
	{
		Vec[Random(0,11)]++;
	}

	MostrarFrecuencia(ne,Vec);

	return 0;
}
