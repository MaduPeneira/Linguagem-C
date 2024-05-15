#include<stdio.h>
#include<stdlib.h>
int main(){
	float valor_em_reais,valor_em_dolar;
	float cotacao_dolar,valor_em_euro;
	
	printf("Informe o valor em reais");
	scanf("%f",& valor_em_reais);
	
	printf("informe a cotacao do dolar");
	scanf("%f",& valor_em_dolar);
	
	printf("informe a cotacao do euro");
	scanf("%f",& valor_em_euro);
	
	
	valor_em_dolar =valor_em_reais/valor_em_euro;
	printf("o valor em dolares é %f\n", valor_em_dolar);
	printf("o valor em euros é: %f\n",valor_em_euro);
	
	
}