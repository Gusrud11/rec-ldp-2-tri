#include <stdio.h>

int main() {
    int num, qtd35=0, qtd100=0, qtdpos=0;
    float somapos=0, mediapos=0;

    printf("Digite um número (digite 0 para sair): ");
    scanf("%d", &num);

    while(num != 0) {
        if(num < 35) {
            qtd35++;
        }
        if(num > 100) {
            qtd100++;
        }
        if(num > 0) {
            qtdpos++;
            somapos += num;
        }
        printf("Digite um número (digite 0 para sair): ");
        scanf("%d", &num);
    }

    if(qtd35 > 0) {
        printf("Quantidade de números inferiores a 35: %d\n", qtd35);
    }
    if(qtd100 > 0) {
        printf("Quantidade de números maiores que 100: %d\n", qtd100);
    }
    if(qtdpos > 0) {
        mediapos = somapos / qtdpos;
        printf("Média dos números positivos: %.2f\n", mediapos);
    }

    return 0;
}