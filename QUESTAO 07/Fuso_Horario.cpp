#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_brazil");
    int S,T,F;
    
    printf("CALCULR HORA : \n");
    
    printf("Digite a hora de sa�da : \n");
    scanf("%d", &S);
    printf("Digite o tempo de v�o : \n");
    scanf("%d", &T);
    printf("Digite a hora de chegada : \n");
    scanf("%d", &F);
    

    if (S == 0){
        S = 24;
    }
    S = ((S + T + F) % 24);
    printf("A hora atual nesse fuso � : %d hora(s) \n ",S);
    
    return 0;
}
