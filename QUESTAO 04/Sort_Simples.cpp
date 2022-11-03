#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"Portuguese_brazil");
    int v1, v2, v3;
    printf("ORDENAR NÚMEROS : \n");
    
    printf("Digite o primeiro número : \n");
    scanf ("%d", &v1);
    printf("Digite o segundo número : \n");
    scanf ("%d", &v2);
    printf("Digite o terceiro número : \n");
    scanf ("%d", &v3);
    
    if((v1 <= v2) && (v1 <= v3)){
        if(v2 <= v3){
            printf("%d\n%d\n%d\n",v1,v2,v3);
        }
        else{
            printf("%d\n%d\n%d\n",v1,v3,v2);
        }
    }
    
    if ((v2 < v1) && (v2 < v3)){
      if(v1 < v3){
        printf("%d\n%d\n%d\n",v2,v1,v3);
    }
      else{
        printf("%d\n%d\n%d\n",v2,v3,v1);
    }
    
    if ((v3 < v1) && (v3 < v2)){
        if (v1 <= v2){
            printf ("%d\n%d\n%d\n",v3,v1,v2);
        }
        else{
            printf("%d\n%d\n%d\n",v3,v2,v1);
        }
    }
}
    printf("NÚMEROS QUE VOCÊ DIGITOU : \n");
    
    printf("\n%d\n%d\n%d\n",v1,v2,v3);

    return 0;

}
