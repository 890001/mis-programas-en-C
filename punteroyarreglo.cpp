#include<stdio.h>//SOLO FUNCIONA CON ARREGLOS//
int main(){
	int i=0,n[]={1,2,3,4,5,6,7,8,9};
	int *p_n;//declaras una variable tipo puntero señalando el tipo de dato que es la que guarda con el nombre de la variable posicion
	p_n=n;//p_n=n[0] el igual no es declarativo, aqui señala la posicion de memoria
	for(i=0;i<10;i++){
		printf("\nDato %i: %i",n[i],*p_n);
		printf("\nPosicion: %p",p_n);
		p_n++;
	}
	return 0;
}
/*#include<stdio.h>
int main(){
	int n=20;
	int *p_n;
	p_n=&n;
	printf("NUMERO: %i\n",n);
	printf("NUMERO: %i\n",*p_n);
	printf("posicion %p\n",p_n);
	printf("posicion %p\n",&n);
	return 0;
}*/