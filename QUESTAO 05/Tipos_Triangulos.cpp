#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_brazil");
    float A, B, C, a, b, c;
    
    printf("SAIBA OS TIPOS DE TRIANGULOS : \n");
    
    printf("Digite um lado do triangulo : \n");
    scanf ("%f", &a);
    printf("Digite outro lado do triangulo : \n");
    scanf ("%f", &b);
    printf("Digite o outro lado do triangulo : \n");
    scanf ("%f", &c);
    
    if(A >= B && A >= C){
        A = a; 
        B = b; 
        C = c;
    }
    
    if (B >= A && B >= C){
        A = b;
        B = a;
        C = c; 
    }
    
    if (C >= A && C >= B){
        A = c;
        B = b;
        C = a;
    }
    
    
    if (A >= B+C){
        printf ("NAO FORMA TRIANGULO\n");
    } else{
    if ((A*A) == ((B*B) + (C*C))){
            printf ("TRIANGULO RETANGULO\n");
    }
    
    if ((A*A) > ((B*B) + (C*C))){
        printf ("TRIANGULO OBTUSANGULO\n");
    }
    
    if ((A*A) < ((B*B) + (C*C))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if (A == B && A == C && B == C){
        printf ("TRIANGULO EQUILATERO\n");
    }
    
    if (A == B && A != C || A == C && A != B || B == C && B != A){
        printf ("TRIANGULO ISOSCELES\n");
    }
    
    }

    return 0;
}
