#include<stdio.h>

int main()
{
  short int teste, tamanho;
	teste=2;
	tamanho=sizeof teste;
	printf("o valor do teste eh: %d\no tamanho eh: %d\n",teste,tamanho);
	teste=teste<<1;
	printf("novo valor do teste: %d\n",teste);
	return 0;
}
