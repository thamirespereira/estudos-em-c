#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
	float nota1, nota2, nota3, media;
	printf(" nota 1 = ", nota1);
	scanf("%f", &nota1);
	printf(" nota 2 = ", nota2);
	scanf("%f", &nota2);
	printf(" nota 3 = ", nota3);
	scanf("%f", &nota3);
	media=(nota1+nota2+nota3)/3;
	printf("media= %.2f", media);
	if(media>=7) printf(" , aprovado");
	else printf(" , aluno reprovado");
	
	for (media=7, media<=10, media=media+1;)
	{printf ("%d\n", media);
	}

	
} 