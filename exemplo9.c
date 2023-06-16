#include <stdio.h>
#include <stdlib.h>

main()
{
	char letra;
	int conta, conte, conti, conto, contu;
	conta=0, conte=0, conti=0, conto=0, contu=0;
	
	while (letra!='.');
	{
	printf("Digite uma letra minuscula (a..z) a cada linha e tecle ENTER: ");
	scanf("%c", &letra);
	
	switch (letra)
	{
		case 'a':
			conta++; break;
		case 'e':
			conte++; break;
		case 'i':
			conti++; break;
		case 'o':
			conto++; break;
		case'u':
			contu++; break;
	}
	scanf("%c", &letra);
}
printf("Total de a: %d \n", conta);
printf("Total de e: %d \n", conte);
printf("Total de i: %d \n", conti);
printf("Total de o: %d \n", conto);
printf("Total de u: %d \n", contu);

return 0;
}