#include <stdio.h>
#include <stdlib.h>

int main(){
    float peso=0, media=0;
    int idade=0, p90=0;
    for(int i=0; i<7; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite o peso: ");
        scanf("%f", &peso);
        media += idade;
        if(peso>=90){
            p90++;
        }       
    }
    media = media/7;
    printf("a quantidade de pessoas com o peso superior a 90 quilos é: %d\n", p90);
    printf("a media das idades das pessoas é: %.2f\n", media);
}