#include<stdio.h>
#include<locale.h>

void zerou (int z); //Prot�tipo da fun��o

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	printf("Ditite um n�mero inteiro: ");
	scanf("%i", &n);
	
	zerou(n); //Chamada da fun��o e uso o n como argumento, ou seja, o valor de n ir� para o par�metro z
	
	return(0);
}

void zerou (int z){ //Fun��o para verificar se o n�mero inteiro digitado � zero
	if(z == 0){
		printf("Zerou!");
	}
	else{
		printf("N�o zerou!");
	}
}
