 #include <stdio.h>

int main(){
	//variaveis(numero,centena,dezena,unidade,numero_invertido)
	int numero,centena,dezena,unidade,numero_invertido;
	
	//Mostra uma mensagem para o usuario
	printf("Digite um numero de tres digitos");
	//Receber um valor do usuario
	scanf("%d",&numero);
	
	//Separa os numero em centena, dezena, unidade
	centena = numero/100;
	dezena = (numero/10)%10;
	unidade = numero%10;
	
	//inverter os numero
	numero_invertido = unidade*100 + dezena*10 + centena;
	
	//mostra os numero invertidos
	printf("Seu numero invertido e:%d\n",numero_invertido);
	
}