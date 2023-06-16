#include <stdio.h>
#include <stdlib.h>
main(){
	int num, maior, ind;
	maior=0;
	
	for (ind=1; ind<=100; ind=ind+1)
	{
		scanf("%d", &num);
		if (num>maior)
		maior=num;
	}
	printf("O maior numero lido e: %d", maior);
	return 0;
}