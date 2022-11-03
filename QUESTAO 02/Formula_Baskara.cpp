#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_brazil");
	double A,B,C;
	printf("CALCULAR FÓRMULA DE BHASKARA : \n");
	
	printf("Digite o valor que represeta o A : \n");
	scanf("%lf", &A);
	printf("Digite o valor que represeta o B : \n");
	scanf("%lf", &B);
	printf("Digite o valor que represeta o C : \n");
	scanf("%lf", &C);
	if ((B * B - 4*A*C) < 0 || (A == 0)){
		printf("Impossivel calcular\n");
	}else{
		printf("R1 = %.5lf\n", (-B + sqrt(B * B- 4 * A * C )) / (2 * A));
		printf("R2 = %.5lf\n", (-B - sqrt(B * B- 4  * A * C )) / (2 * A));
	}

	
    return 0;
}
