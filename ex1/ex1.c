#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade , idade18=0;
    for(int i = 0; i < 10; i++){
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if(idade >= 18){
            idade18++;
        }
    }
    printf("Quantidade de pessoas com 18 anos ou mais: %d\n", idade18);
}