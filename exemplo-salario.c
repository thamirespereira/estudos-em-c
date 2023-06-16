#include <stdio.h>
#include <stdlib.h>
main()
{
	float salbruto, salliquido, imposto, totimposto, totliquido, totbruto;
	int cont;
	
	totimposto=0, totliquido=0, totbruto=0;
	
	for (cont=1; cont<=15; cont++)
	{
		printf("Digite o salario bruto: ");
		scanf("%f", &salbruto);
		
		if(salbruto>999)
		imposto= salbruto*0.10;
		
		else
		if (salbruto>1999)
		imposto= salbruto*0.15;
		
		else
		if(salbruto>9999)
		imposto= salbruto*0.20;
		
		else
		if (salbruto>99999)
		imposto= salbruto*0.25;
		
		else 
		imposto= salbruto*0.30;
		
		salliquido = salbruto-imposto;
		
		printf("Salario liquido: %.2f \n", salliquido);
		
		totbruto= totbruto+salbruto;
		totliquido= totliquido+salliquido;
		totimposto= totimposto+imposto;
	}
	printf("Total salario bruto: %.2f \n", totbruto);
	printf("Total salario liquido: %.2f \n", totliquido);
	printf("Total imposto: %.2f \n", totimposto);
}