#include <stdio.h>
#include <stdlib.h>
main(){
	int cont;
	float salario, maior, soma, media;
	maior=0;
	soma=0;
	for (cont=1; cont<=10; cont++)
	{printf("Salario do funcionario: ");
	scanf("%f", &salario);
	soma= soma+salario;
	if (salario > maior){
		maior= salario;
	}
	}
	media=soma/5;
	printf("O maior salario da empresa e: %.2f\n",maior);
	printf("A media salarial da empresa e: %.2f", media);
	return 0;


}