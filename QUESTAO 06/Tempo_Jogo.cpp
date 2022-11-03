#include <stdio.h>
 #include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_brazil");
    int horaInicio,horaFim;
    
    printf("CALCULAR O TEMPO DE JOGO : \n");
    
    printf("Digite a hora de inicio do jogo : \n");
    scanf("%d",&horaInicio);
    printf("Digite a hora que o jogo terminou : \n");
    scanf("%d", &horaFim);
    
    if (horaFim > horaInicio){
    printf("O JOGO DUROU %d HORA(S)\n", horaFim - horaInicio);
    }
    
    if(!(horaInicio < horaFim)){
        printf("O JOGO DUROU %d HORA(S)\n", 24 - horaInicio + horaFim);
    }
    return 0;
}
