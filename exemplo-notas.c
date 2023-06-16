#include <stdio.h>
#include <stdlib.h>

main()
{
	float nota1, nota2, nota3, media;
	int cont;
	
	while (cont<=40)
	{
		printf("Digite a nota 1: ");
		scanf("%f", &nota1);
		
		printf("Digite a nota 2: ");
		scanf("%f", &nota2);
		
		printf("Digite a nota 3: ");
		scanf("%f", &nota3);
		
		media= (nota1+nota2+nota3)/3;
		
		if (media>=7)
		{
			printf("Aluno APROVADO com media: %.2f \n", media);
		}
		else
		{
			printf("Aluno REPROVADO com media: %.2f \n", media);
		}
	}
}