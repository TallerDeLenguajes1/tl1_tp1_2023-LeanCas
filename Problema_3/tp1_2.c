#include <stdio.h>

//FUNCIONES

int cuadrado (int num);

void cuadradoImprimir (int num);

void MostrarDireccion (int num);

void invertir(int *a, int *b);

void orden(int *a,int *b);


//FUNCION PRINCIPAL


int main() {
	
	int a,b;
	
	printf("\nIngrese el valor de a : ");
	
	scanf("%d",&a);
	
	printf("\nIngrese el valor de b : ");
	
	scanf("%d",&b);
	
	cuadradoImprimir(a);
	
	MostrarDireccion(a);
	
	invertir(&a,&b);
	
	printf("\nInvertido: El valor de a es %d y el valor de b es %d \n",a,b);
	
	orden(&a,&b);
	
	
	printf("\nOrden: El valor de a es %d y es mayor a b que es %d",a,b);
	
	
	return 0;
}


//DESARROLLO DE FUNCIONES


int cuadrado (int num){
	
	return (num * num);
	
}

void cuadradoImprimir (int num) {
	
	int resultado = (num * num);
	
	printf("\nEl cuadrado de %d es %d \n",num,resultado);
	
}

void MostrarDireccion (int num) {
	
	printf("\nLa direccion de la variable es %d y su contenido es %d \n",&num,num);
	
}

void invertir(int *a, int *b) {
	
	int temporal = *a;
	
	*a = *b;
	
	*b = temporal;
	
		
}

void orden(int *a,int *b) {

	if(*a < *b){
		
		invertir(a,b);
		
	}

}
