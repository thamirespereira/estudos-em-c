#include <stdio.h>
#include <stdlib.h>

main()
{
	int num;
	do{
		printf("Digite um numero: ");
		scanf("%d", &num);
		
		if (num != 0 && num != 9);
		{
			if (num%2 ==0)
			printf("Sucessor= %d \n", num+1);
			else
			printf("Antecessor= %d \n", num-1);
		}
	}
	while (num != 0 && num != 9);
}