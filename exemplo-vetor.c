#include <stdio.h>

int main()

{

float vet[10],soma=0,media; int posicao;

for (posicao=0;posicao<10;posicao++)

{

scanf ("%f",&vet[posicao]);

soma=soma+vet[posicao];

}

media=soma/10;

printf ("numeros maiores que media %.2f \n",media);

for (posicao=0;posicao<10;posicao++)

{

if (vet[posicao] >= media)

printf ("%.2f \n",vet[posicao]);

}

}