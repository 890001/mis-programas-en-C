#include<stdio.h>
int main(){
	char nombre[20], palabra[20];
	printf("digite su nombre: ");
	scanf("%s",nombre);//SCANF NO LEE ESPACIO william durand===> solo detecta william
	fflush(stdin);
	printf("%s\n", nombre);
	printf("digite una palabra: "); gets(palabra);//gets lee con espacio 
	printf("\n%s", palabra);
	/*funcion GETCHAR
	getchar lee caracter por caracter, la llamada a getchar devuelve el caracter siguiente del flujo de entrada stdin
	en caso de error  o de encontrar el fin del archivo, devuelve EOF (MACRO DEFINIDO EN stdio.h)
	funcion PUTCHAR
	se utiliza para escribir salida (stdout) caracter a caracter El caracter que se escribe es el transmitido como argumento
	*/
	int c;
	while(EOF != (c=getchar())){//mientras c no haya llegado al final
		putchar(c);
	}
	return 0;
}