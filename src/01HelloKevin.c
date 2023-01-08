#include <stdio.h>

//Comentario en una sola línea

/*	Este
	es
	un
	comentario
	multilineal
*/

int main(){
	
	printf("Hello Kevin!\n");
	printf("I like pizza\n");
	printf("It's really good\n");

	printf("\nAhora vienen los comentarios y secuencia de escapes\n");

/*	Secuencia de escape: Combinación de caracteres constitiendo en \
	y una letra o combinacion de dígitos.
	Especifican acciones en una línea o string de texto.
	\n = nueva línea
	\t = tab
*/
	printf("\n1\t2\t3\n4\t5\t6\n7\t8\t9\n");
	printf("\"Me encanta la pizza\" - Abraham Licoln probablemente");
	return (0);
}