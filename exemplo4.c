
#include <stdio.h>
#include <stdlib.h>
main(){
	int cont;
	float salario, soma, maior, menor, media;
	maior=0; soma=0; menor=0;
	
	for (cont=1;cont<=10;cont++)
	{
		printf("digite o salario do funcionario: ", salario);
		scanf("%f", &salario);
		soma=soma+salario;
		if (salario>maior)
		{
			maior=salario;
		}
		if (menor<salario)
		{
			menor=salario;
		}
		media=soma/5;
	}
	printf("O maior salario da empresa e: %.2f\n", maior);
	printf("A media salarial da empresa e: %.2f\n", media);
	printf("O menor salario da empresa e: %.2f\n", menor);
	return 0;
}