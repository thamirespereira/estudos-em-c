#include <stdio.h>
#include <stdlib.h>

main()
{
	int num;
	do
	{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num !=0)
			printf("O numero e: %d \n", num);
	}	
	while (num!=0);
}