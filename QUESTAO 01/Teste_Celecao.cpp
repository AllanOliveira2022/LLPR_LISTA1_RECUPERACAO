#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"Portuguese_brazil");
	int A,B,C,D;
	printf("TESTE DE SELE��O : \n");
	
	printf("Digite o primeiro valor : \n");
	scanf("%d", &A);
	printf("Digite o segundo valor : \n");
	scanf("%d", &B);
	printf("Digite o terceiro valor : \n");
	scanf("%d", &C);
	printf("Digite o quarto valor : \n");
	scanf("%d", &D);
	
	if ((B > C) && (D > A) && ((C + D) > (A + B)) && (C > 0) && (D > 0) && (A % 2 == 0)) {
		printf("Valores aceitos\n");
	} else {
		printf("Valores n�o aceitos\n");
	}
	
	return 0;
}
