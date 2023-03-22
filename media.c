#include <stdio.h>

int main() {
    
    float nota1;
    float nota2;
    float media;
    
    printf("digite sua primeira nota: ");
    scanf("%f", &nota1);
    
        printf("digite sua segunda nota: ");
    scanf("%f", &nota2);
    media= (nota1 + nota2) /2;
    
     printf("sua média é: %.2f", media);
    if(media>=6.5){
    printf("\nPassou fio");
    }
    else if(media == 5){
        printf("\nprecisa ir pro baile");
    }
    else
    {
    printf("\nchinelada");
    }
    
}
