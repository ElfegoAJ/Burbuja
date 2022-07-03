#include<stdio.h>
#include<windows.h>
//Elfego Adair Juárez Arias UAEMEX
int main(){
	int indice; int x = 0; int array[indice];
	printf("Ingrese la cantidad de numeros a ordenar: \n");
	scanf("%i", &x);
	
	printf ("\n\n\t\tIngresar numeros...");
	for (indice=0; indice < x; indice ++)
	{
		printf("\nNumero [%d]: ", indice+1);
		scanf("%i", &array[indice]);
	}
	
	int i, j, aux;	
	for (i =0; i<x-1; i++){
		for (j=0; j<x-1; j++){
			if(array[j+1]>array[j]){
				aux = array [j+1];
				array [j+1] = array[j];
				array[j]=aux;		
			}
		}
	}
	printf("\n\tNumeros ordenados de mayor a menor: \n\n");
	for (int i=0; i<x; i++) { 
		printf("| %d ",array[i]);
	}
}
//Elfego Adair Juárez Arias UAEMEX
