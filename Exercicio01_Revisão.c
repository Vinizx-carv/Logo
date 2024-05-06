#include <stdio.h>

int main(){
	float salario_minimo,quilowatt_gasto,valor_de_cada_quilowatt,valor_da_conta_de_energia,valor_da_conta_com_desconto;
	//Solicitar um valor de entrada
	printf("Digite um valor de seu salario minimo:\n");
	scanf("%f",&salario_minimo);
	//Solicitar um valor de entrada
	printf("Digite o valor da conta de energia :\n");
	scanf("%f",&quilowatt_gasto);
	
	//calcular o valor de cada quilowatts
	valor_de_cada_quilowatt = (salario_minimo / 7)/100;
	//Calcular o valor da conta de energia
	valor_da_conta_de_energia = valor_de_cada_quilowatt * quilowatt_gasto;
	//Calcular o valor da conta de energia com um desconto de 10%
	valor_da_conta_com_desconto = valor_da_conta_de_energia * 0.9;
	
	//Mostra os resultados obtidos
	printf("\nValor de cada quilowatt:R$%.2f\n",valor_de_cada_quilowatt);
	printf("Valor da conta de energia:R$%.2f\n",valor_da_conta_de_energia);
	printf("Novo valor da conta de energia apos um desconto:R$%.2f\n",valor_da_conta_com_desconto);
}